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

// Function: entry_002e3064
// Address: 0x2e3064 - 0x2e30e4
void entry_002e3064_0x2e3064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3064_0x2e3064");
#endif

    switch (ctx->pc) {
        case 0x2e30acu: goto label_2e30ac;
        default: break;
    }

    ctx->pc = 0x2e3064u;

    // 0x2e3064: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e3068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e306c: 0x0  nop
    ctx->pc = 0x2e306cu;
    // NOP
    // 0x2e3070: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e3070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e3074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e3074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e307c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e3080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3084: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e3084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e3088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e308c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3090: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e3090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e3098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e309c: 0x0  nop
    ctx->pc = 0x2e309cu;
    // NOP
    // 0x2e30a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e30a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e30a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E30A4u;
    SET_GPR_U32(ctx, 31, 0x2E30ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E30A4u, 0x2E30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30ACu;
label_2e30ac:
    // 0x2e30ac: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e30acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e30b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e30b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e30b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e30bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e30c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e30d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e30dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E30DCu;
    {
        const bool branch_taken_0x2e30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e30dc) {
            ctx->pc = 0x2E3198u;
            return;
        }
    }
    ctx->pc = 0x2E30E4u;
}
