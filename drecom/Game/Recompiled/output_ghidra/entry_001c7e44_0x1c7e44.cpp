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

// Function: entry_001c7e44
// Address: 0x1c7e44 - 0x1c7ef4
void entry_001c7e44_0x1c7e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7e44_0x1c7e44");
#endif

    switch (ctx->pc) {
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7ef0u: goto label_1c7ef0;
        default: break;
    }

    ctx->pc = 0x1c7e44u;

    // 0x1c7e44: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C7E48u;
    SET_GPR_U32(ctx, 31, 0x1C7E50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C7E48u, 0x1C7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E50u;
label_1c7e50:
    // 0x1c7e50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7e50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7e58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e5c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c7e5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7e60: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C7E60u;
    SET_GPR_U32(ctx, 31, 0x1C7E68u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C7E60u, 0x1C7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E68u;
label_1c7e68:
    // 0x1c7e68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7e68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7e6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c7e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7e70: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C7E70u;
    SET_GPR_U32(ctx, 31, 0x1C7E78u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C7E70u, 0x1C7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E78u;
label_1c7e78:
    // 0x1c7e78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e7c: 0x90a409e7  lbu         $a0, 0x9E7($a1)
    ctx->pc = 0x1c7e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1c7e80: 0x10800138  beqz        $a0, . + 4 + (0x138 << 2)
    ctx->pc = 0x1C7E80u;
    {
        const bool branch_taken_0x1c7e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e80) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C7E88u;
    // 0x1c7e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7e8c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c7e90: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1c7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1c7e94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c7e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c7e98: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C7E98u;
    {
        const bool branch_taken_0x1c7e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e98) {
            ctx->pc = 0x1C7F5Cu;
            return;
        }
    }
    ctx->pc = 0x1C7EA0u;
    // 0x1c7ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7ea4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ea8: 0xe4a01564  swc1        $f0, 0x1564($a1)
    ctx->pc = 0x1c7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5476), bits); }
    // 0x1c7eac: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7eb0: 0xc4c000d4  lwc1        $f0, 0xD4($a2)
    ctx->pc = 0x1c7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7eb4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7eb8: 0xe4e01568  swc1        $f0, 0x1568($a3)
    ctx->pc = 0x1c7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 5480), bits); }
    // 0x1c7ebc: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c7ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ec0: 0xc5001568  lwc1        $f0, 0x1568($t0)
    ctx->pc = 0x1c7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7ec4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ec8: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1c7ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ed0: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1c7ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ed8: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c7edc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7EDCu;
    {
        const bool branch_taken_0x1c7edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7edc) {
            ctx->pc = 0x1C7EF4u;
            return;
        }
    }
    ctx->pc = 0x1C7EE4u;
    // 0x1c7ee4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ee8: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1C7EE8u;
    SET_GPR_U32(ctx, 31, 0x1C7EF0u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1C7EE8u, 0x1C7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7EF0u;
label_1c7ef0:
    // 0x1c7ef0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7ef0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c7ef4u;
}
