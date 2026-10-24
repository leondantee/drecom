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

// Function: entry_001cda54
// Address: 0x1cda54 - 0x1cdad0
void entry_001cda54_0x1cda54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda54_0x1cda54");
#endif

    switch (ctx->pc) {
        case 0x1cdaccu: goto label_1cdacc;
        default: break;
    }

    ctx->pc = 0x1cda54u;

    // 0x1cda54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda58: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1cda58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1cda5c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1CDA5Cu;
    {
        const bool branch_taken_0x1cda5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda5c) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CDA64u;
    // 0x1cda64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda68: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cda6c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cda70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cda70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cda74: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CDA74u;
    {
        const bool branch_taken_0x1cda74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda74) {
            ctx->pc = 0x1CDB38u;
            return;
        }
    }
    ctx->pc = 0x1CDA7Cu;
    // 0x1cda7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cda7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda84: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1cda84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1cda88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cda88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda8c: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda94: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cda94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cda98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cda9c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdaa0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaa4: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1cdaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1cdaa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaac: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1cdaacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdab4: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1cdab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDAB8u;
    {
        const bool branch_taken_0x1cdab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdab8) {
            ctx->pc = 0x1CDAD0u;
            return;
        }
    }
    ctx->pc = 0x1CDAC0u;
    // 0x1cdac0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdac4: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CDAC4u;
    SET_GPR_U32(ctx, 31, 0x1CDACCu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CDAC4u, 0x1CDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDACCu;
label_1cdacc:
    // 0x1cdacc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cdaccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cdad0u;
}
