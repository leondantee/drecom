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

// Function: entry_001c3b9c
// Address: 0x1c3b9c - 0x1c3c48
void entry_001c3b9c_0x1c3b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3b9c_0x1c3b9c");
#endif

    switch (ctx->pc) {
        case 0x1c3bacu: goto label_1c3bac;
        case 0x1c3bb8u: goto label_1c3bb8;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3becu: goto label_1c3bec;
        default: break;
    }

    ctx->pc = 0x1c3b9cu;

    // 0x1c3b9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3ba0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3ba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3ba4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3BA4u;
    SET_GPR_U32(ctx, 31, 0x1C3BACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3BA4u, 0x1C3BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BACu;
label_1c3bac:
    // 0x1c3bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bb0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3BB0u;
    SET_GPR_U32(ctx, 31, 0x1C3BB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3BB0u, 0x1C3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BB8u;
label_1c3bb8:
    // 0x1c3bb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3bbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3bc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3bc4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3BC4u;
    SET_GPR_U32(ctx, 31, 0x1C3BCCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3BC4u, 0x1C3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BCCu;
label_1c3bcc:
    // 0x1c3bcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3bd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3BD0u;
    SET_GPR_U32(ctx, 31, 0x1C3BD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3BD0u, 0x1C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3bdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3be0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3be4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3BE4u;
    SET_GPR_U32(ctx, 31, 0x1C3BECu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3BE4u, 0x1C3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BECu;
label_1c3bec:
    // 0x1c3bec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C3BECu;
    {
        const bool branch_taken_0x1c3bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bec) {
            ctx->pc = 0x1C3C78u;
            return;
        }
    }
    ctx->pc = 0x1C3BF4u;
    // 0x1c3bf4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3bf8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c3bfc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3BFCu;
    {
        const bool branch_taken_0x1c3bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bfc) {
            ctx->pc = 0x1C3C48u;
            return;
        }
    }
    ctx->pc = 0x1C3C04u;
    // 0x1c3c04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c3c0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c3c10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c3c14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3C14u;
    {
        const bool branch_taken_0x1c3c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c14) {
            ctx->pc = 0x1C3C48u;
            return;
        }
    }
    ctx->pc = 0x1C3C1Cu;
    // 0x1c3c1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c20: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3c24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3c28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3c2c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c38: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3c3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3c44: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3c44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c3c48u;
}
