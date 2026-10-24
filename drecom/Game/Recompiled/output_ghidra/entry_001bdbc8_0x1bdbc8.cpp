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

// Function: entry_001bdbc8
// Address: 0x1bdbc8 - 0x1bdc38
void entry_001bdbc8_0x1bdbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdbc8_0x1bdbc8");
#endif

    switch (ctx->pc) {
        case 0x1bdbecu: goto label_1bdbec;
        default: break;
    }

    ctx->pc = 0x1bdbc8u;

    // 0x1bdbc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbcc: 0x906309da  lbu         $v1, 0x9DA($v1)
    ctx->pc = 0x1bdbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1bdbd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bdbd4: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1bdbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1bdbd8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1bdbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bdbdc: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BDBDCu;
    {
        const bool branch_taken_0x1bdbdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdbdc) {
            ctx->pc = 0x1BDC38u;
            return;
        }
    }
    ctx->pc = 0x1BDBE4u;
    // 0x1bdbe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1BDBE4u;
    SET_GPR_U32(ctx, 31, 0x1BDBECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1BDBE4u, 0x1BDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBECu;
label_1bdbec:
    // 0x1bdbec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdbecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdbf0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1bdbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bdbf4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1bdbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1bdbf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bdbfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bdc00: 0x244452d8  addiu       $a0, $v0, 0x52D8
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
    // 0x1bdc04: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1bdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bdc08: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1bdc08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdc0c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1bdc0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1bdc10: 0x3c08469c  lui         $t0, 0x469C
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18076 << 16));
    // 0x1bdc14: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x1bdc14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x1bdc18: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1bdc18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdc1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdc20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1bdc24: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1bdc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1bdc28: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1bdc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1bdc2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1bdc2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdc30: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1BDC30u;
    SET_GPR_U32(ctx, 31, 0x1BDC38u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1BDC30u, 0x1BDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC38u;
}
