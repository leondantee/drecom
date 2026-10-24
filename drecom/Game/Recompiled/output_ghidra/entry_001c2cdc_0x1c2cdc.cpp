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

// Function: entry_001c2cdc
// Address: 0x1c2cdc - 0x1c2d88
void entry_001c2cdc_0x1c2cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2cdc_0x1c2cdc");
#endif

    switch (ctx->pc) {
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf8u: goto label_1c2cf8;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d18u: goto label_1c2d18;
        case 0x1c2d2cu: goto label_1c2d2c;
        default: break;
    }

    ctx->pc = 0x1c2cdcu;

    // 0x1c2cdc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2ce0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2ce0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2ce4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2CE4u;
    SET_GPR_U32(ctx, 31, 0x1C2CECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2CE4u, 0x1C2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CECu;
label_1c2cec:
    // 0x1c2cec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2cf0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2CF0u;
    SET_GPR_U32(ctx, 31, 0x1C2CF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2CF0u, 0x1C2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CF8u;
label_1c2cf8:
    // 0x1c2cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2cfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2d04: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2D04u;
    SET_GPR_U32(ctx, 31, 0x1C2D0Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2D04u, 0x1C2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D0Cu;
label_1c2d0c:
    // 0x1c2d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d10: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2D10u;
    SET_GPR_U32(ctx, 31, 0x1C2D18u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2D10u, 0x1C2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D18u;
label_1c2d18:
    // 0x1c2d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d20: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2d24: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2D24u;
    SET_GPR_U32(ctx, 31, 0x1C2D2Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2D24u, 0x1C2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D2Cu;
label_1c2d2c:
    // 0x1c2d2c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C2D2Cu;
    {
        const bool branch_taken_0x1c2d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d2c) {
            ctx->pc = 0x1C2DB8u;
            return;
        }
    }
    ctx->pc = 0x1C2D34u;
    // 0x1c2d34: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2d38: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c2d3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2D3Cu;
    {
        const bool branch_taken_0x1c2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d3c) {
            ctx->pc = 0x1C2D88u;
            return;
        }
    }
    ctx->pc = 0x1C2D44u;
    // 0x1c2d44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d48: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2d4c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2d50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2d54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2D54u;
    {
        const bool branch_taken_0x1c2d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d54) {
            ctx->pc = 0x1C2D88u;
            return;
        }
    }
    ctx->pc = 0x1C2D5Cu;
    // 0x1c2d5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d60: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2d64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2d68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c2d6c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c2d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d78: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2d84: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c2d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c2d88u;
}
