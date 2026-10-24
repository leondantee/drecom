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

// Function: entry_001c5d9c
// Address: 0x1c5d9c - 0x1c5e48
void entry_001c5d9c_0x1c5d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5d9c_0x1c5d9c");
#endif

    switch (ctx->pc) {
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5decu: goto label_1c5dec;
        default: break;
    }

    ctx->pc = 0x1c5d9cu;

    // 0x1c5d9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5da4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5DA4u;
    SET_GPR_U32(ctx, 31, 0x1C5DACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5DA4u, 0x1C5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5db0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5DB0u, 0x1C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DB8u;
label_1c5db8:
    // 0x1c5db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5dbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5dc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5dc4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5DC4u;
    SET_GPR_U32(ctx, 31, 0x1C5DCCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5DC4u, 0x1C5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DCCu;
label_1c5dcc:
    // 0x1c5dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5dd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5DD0u;
    SET_GPR_U32(ctx, 31, 0x1C5DD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5DD0u, 0x1C5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DD8u;
label_1c5dd8:
    // 0x1c5dd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ddc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5de0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5de4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5DE4u;
    SET_GPR_U32(ctx, 31, 0x1C5DECu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5DE4u, 0x1C5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DECu;
label_1c5dec:
    // 0x1c5dec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5DECu;
    {
        const bool branch_taken_0x1c5dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dec) {
            ctx->pc = 0x1C5E78u;
            return;
        }
    }
    ctx->pc = 0x1C5DF4u;
    // 0x1c5df4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5df8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c5dfc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5DFCu;
    {
        const bool branch_taken_0x1c5dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dfc) {
            ctx->pc = 0x1C5E48u;
            return;
        }
    }
    ctx->pc = 0x1C5E04u;
    // 0x1c5e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c5e0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5e10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5e14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5E14u;
    {
        const bool branch_taken_0x1c5e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e14) {
            ctx->pc = 0x1C5E48u;
            return;
        }
    }
    ctx->pc = 0x1C5E1Cu;
    // 0x1c5e1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c5e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e20: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5e24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5e28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c5e2c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e38: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e44: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c5e48u;
}
