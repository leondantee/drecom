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

// Function: entry_002fb9f8
// Address: 0x2fb9f8 - 0x2fba64
void entry_002fb9f8_0x2fb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb9f8_0x2fb9f8");
#endif

    ctx->pc = 0x2fb9f8u;

    // 0x2fb9f8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9fc: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x2fb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2fba00: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2fba00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fba04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fba04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fba08: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fba0c: 0x1223022c  beq         $s1, $v1, . + 4 + (0x22C << 2)
    ctx->pc = 0x2FBA0Cu;
    {
        const bool branch_taken_0x2fba0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fba0c) {
            ctx->pc = 0x2FC2C0u;
            return;
        }
    }
    ctx->pc = 0x2FBA14u;
    // 0x2fba14: 0x868515f0  lh          $a1, 0x15F0($s4)
    ctx->pc = 0x2fba14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fba18: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x2fba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fba1c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fba1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fba20: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x2fba20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2fba24: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fba24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fba28: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x2fba28u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fba2c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fba30: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fba34: 0x10a0015e  beqz        $a1, . + 4 + (0x15E << 2)
    ctx->pc = 0x2FBA34u;
    {
        const bool branch_taken_0x2fba34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba34) {
            ctx->pc = 0x2FBFB0u;
            return;
        }
    }
    ctx->pc = 0x2FBA3Cu;
    // 0x2fba3c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fba40: 0x8c720104  lw          $s2, 0x104($v1)
    ctx->pc = 0x2fba40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fba44: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fba44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fba48: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fba4c: 0x1243008f  beq         $s2, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2FBA4Cu;
    {
        const bool branch_taken_0x2fba4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fba4c) {
            ctx->pc = 0x2FBC8Cu;
            return;
        }
    }
    ctx->pc = 0x2FBA54u;
    // 0x2fba54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fba58: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2fba58u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fba5c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2FBA5Cu;
    {
        const bool branch_taken_0x2fba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fba5c) {
            ctx->pc = 0x2FBBC8u;
            return;
        }
    }
    ctx->pc = 0x2FBA64u;
}
