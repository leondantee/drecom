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

// Function: entry_002e30e4
// Address: 0x2e30e4 - 0x2e3168
void entry_002e30e4_0x2e30e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e30e4_0x2e30e4");
#endif

    switch (ctx->pc) {
        case 0x2e3150u: goto label_2e3150;
        default: break;
    }

    ctx->pc = 0x2e30e4u;

    // 0x2e30e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e30e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e30e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e30ec: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E30ECu;
    {
        const bool branch_taken_0x2e30ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e30ec) {
            ctx->pc = 0x2E3168u;
            return;
        }
    }
    ctx->pc = 0x2E30F4u;
    // 0x2e30f4: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e30f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e30f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e30f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e30fc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e30fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e3100: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E3100u;
    {
        const bool branch_taken_0x2e3100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3100) {
            ctx->pc = 0x2E3168u;
            return;
        }
    }
    ctx->pc = 0x2E3108u;
    // 0x2e3108: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e310c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e310cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3110: 0x0  nop
    ctx->pc = 0x2e3110u;
    // NOP
    // 0x2e3114: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e3114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e3118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e311c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e3120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e3124: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3128: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e3128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e312c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3130: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3134: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3138: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e313c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3140: 0x0  nop
    ctx->pc = 0x2e3140u;
    // NOP
    // 0x2e3144: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e3144u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3148: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E3148u;
    SET_GPR_U32(ctx, 31, 0x2E3150u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E3148u, 0x2E3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3150u;
label_2e3150:
    // 0x2e3150: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e3154: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e3154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e3158: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2e3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2e315c: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e315cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3160: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3160u;
    {
        const bool branch_taken_0x2e3160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3160) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E3168u;
}
