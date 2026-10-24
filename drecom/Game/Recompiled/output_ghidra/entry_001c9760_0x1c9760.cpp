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

// Function: entry_001c9760
// Address: 0x1c9760 - 0x1c981c
void entry_001c9760_0x1c9760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9760_0x1c9760");
#endif

    switch (ctx->pc) {
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c9814u: goto label_1c9814;
        default: break;
    }

    ctx->pc = 0x1c9760u;

    // 0x1c9760: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x1c9760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9764: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c9768: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1c9768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1c976c: 0x1022025  or          $a0, $t0, $v0
    ctx->pc = 0x1c976cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1c9770: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1c9770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1c9774: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9778: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c977c: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x1c9780: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1c9780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c9784: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c9784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c9788: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c9788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c978c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9790: 0x8c271a98  lw          $a3, 0x1A98($at)
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9794: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c9798: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1c979c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c97a0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1c97a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c97a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1c97a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c97a8: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x1c97a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97ac: 0xa126157d  sb          $a2, 0x157D($t1)
    ctx->pc = 0x1c97acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5501), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c97b0: 0x8faa0088  lw          $t2, 0x88($sp)
    ctx->pc = 0x1c97b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97b4: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x1c97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1c97b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1c97bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c97bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c97c0: 0xad420008  sw          $v0, 0x8($t2)
    ctx->pc = 0x1c97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
    // 0x1c97c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97c8: 0x8c6213e8  lw          $v0, 0x13E8($v1)
    ctx->pc = 0x1c97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c97cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C97CCu;
    {
        const bool branch_taken_0x1c97cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c97cc) {
            ctx->pc = 0x1C981Cu;
            return;
        }
    }
    ctx->pc = 0x1C97D4u;
    // 0x1c97d4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97dc: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c97e0: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c97e4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c97e8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C97E8u;
    SET_GPR_U32(ctx, 31, 0x1C97F0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C97E8u, 0x1C97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97F0u;
label_1c97f0:
    // 0x1c97f0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c97f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c97f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c97f8: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1c97f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1c97fc: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1c97fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c9800: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c9800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9804: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9808: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c980c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C980Cu;
    SET_GPR_U32(ctx, 31, 0x1C9814u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C980Cu, 0x1C9814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9814u;
label_1c9814:
    // 0x1c9814: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9818: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c9818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1c981cu;
}
