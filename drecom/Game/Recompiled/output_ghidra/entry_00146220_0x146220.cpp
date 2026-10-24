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

// Function: entry_00146220
// Address: 0x146220 - 0x146278
void entry_00146220_0x146220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146220_0x146220");
#endif

    switch (ctx->pc) {
        case 0x146268u: goto label_146268;
        default: break;
    }

    ctx->pc = 0x146220u;

    // 0x146220: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x146220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146224: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x146224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x146228: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x146228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x14622c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14622cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146230: 0x0  nop
    ctx->pc = 0x146230u;
    // NOP
    // 0x146234: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146238: 0x0  nop
    ctx->pc = 0x146238u;
    // NOP
    // 0x14623c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x14623Cu;
    {
        const bool branch_taken_0x14623c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14623c) {
            ctx->pc = 0x146278u;
            return;
        }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146248: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14624c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x146250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x146250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x146254: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x146254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x146258: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x146258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14625c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x146260: 0xc058f50  jal         func_163D40
    ctx->pc = 0x146260u;
    SET_GPR_U32(ctx, 31, 0x146268u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x146260u, 0x146268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146268u;
label_146268:
    // 0x146268: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x14626c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x146270: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146270u;
    {
        const bool branch_taken_0x146270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146270) {
            ctx->pc = 0x1462A4u;
            return;
        }
    }
    ctx->pc = 0x146278u;
}
