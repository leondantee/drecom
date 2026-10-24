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

// Function: entry_002914dc
// Address: 0x2914dc - 0x291534
void entry_002914dc_0x2914dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002914dc_0x2914dc");
#endif

    switch (ctx->pc) {
        case 0x2914fcu: goto label_2914fc;
        case 0x29150cu: goto label_29150c;
        default: break;
    }

    ctx->pc = 0x2914dcu;

    // 0x2914dc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2914e0: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x2914e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2914e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2914e8: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2914ec: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2914ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2914f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2914f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2914f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2914F4u;
    SET_GPR_U32(ctx, 31, 0x2914FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2914FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2914FCu) { return; }
    ctx->pc = 0x2914FCu;
label_2914fc:
    // 0x2914fc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x291500: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291504: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x291504u;
    SET_GPR_U32(ctx, 31, 0x29150Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x29150Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29150Cu) { return; }
    ctx->pc = 0x29150Cu;
label_29150c:
    // 0x29150c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291510: 0xac202a68  sw          $zero, 0x2A68($at)
    ctx->pc = 0x291510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A68u, _value); } while (0);
    // 0x291514: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291518: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x29151c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291520: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291524: 0xac222a70  sw          $v0, 0x2A70($at)
    ctx->pc = 0x291524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A70u, _value); } while (0);
    // 0x291528: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x291528u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29152c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29152c) {
            ctx->pc = 0x291878u;
            return;
        }
    }
    ctx->pc = 0x291534u;
}
