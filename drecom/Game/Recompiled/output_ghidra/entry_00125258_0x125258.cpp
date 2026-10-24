#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00125258
// Address: 0x125258 - 0x1252a4
void entry_00125258_0x125258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125258_0x125258");
#endif

    switch (ctx->pc) {
        case 0x125270u: goto label_125270;
        case 0x125284u: goto label_125284;
        default: break;
    }

    ctx->pc = 0x125258u;

    // 0x125258: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12525c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125260: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x125260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125264: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x125264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125268: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x125268u;
    SET_GPR_U32(ctx, 31, 0x125270u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x125268u, 0x125270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125270u;
label_125270:
    // 0x125270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125274: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x125274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x125278: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12527c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12527Cu;
    SET_GPR_U32(ctx, 31, 0x125284u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12527Cu, 0x125284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125284u;
label_125284:
    // 0x125284: 0x96020082  lhu         $v0, 0x82($s0)
    ctx->pc = 0x125284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x125288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125288u;
    {
        const bool branch_taken_0x125288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125288) {
            ctx->pc = 0x1252A4u;
            return;
        }
    }
    ctx->pc = 0x125290u;
    // 0x125290: 0x96020082  lhu         $v0, 0x82($s0)
    ctx->pc = 0x125290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x125294: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x125298: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x125298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x12529c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12529Cu;
    {
        const bool branch_taken_0x12529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12529c) {
            ctx->pc = 0x1252B8u;
            return;
        }
    }
    ctx->pc = 0x1252A4u;
}
