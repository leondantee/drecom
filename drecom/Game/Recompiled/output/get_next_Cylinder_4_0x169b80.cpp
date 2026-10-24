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

// Function: get_next_Cylinder_4
// Address: 0x169b80 - 0x169dac
void get_next_Cylinder_4_0x169b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_next_Cylinder_4_0x169b80");
#endif

    switch (ctx->pc) {
        case 0x169b94u: goto label_169b94;
        case 0x169d18u: goto label_169d18;
        case 0x169d70u: goto label_169d70;
        default: break;
    }

    ctx->pc = 0x169b80u;

label_169b80:
    // 0x169b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169b84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x169b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x169b88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x169b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x169b8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x169b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x169b90: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x169b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_169b94:
    // 0x169b94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169b98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169b9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169ba0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169ba4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169ba8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169bac: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x169bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x169bb0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169bb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169bb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169bbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169bc0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x169bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x169bc4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x169bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169bc8: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x169BC8u;
    {
        const bool branch_taken_0x169bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169bc8) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169BD0u;
    // 0x169bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x169bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169bd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169bdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169be0: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169be4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169be8: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x169be8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x169bec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169bf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169bf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169bf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169bfc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x169bfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x169c00: 0x1420005b  bnez        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x169C00u;
    {
        const bool branch_taken_0x169c00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c00) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169C08u;
    // 0x169c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c0c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x169c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169c14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c18: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169c18u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169c1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c20: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x169c20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x169c24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169c28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169c2c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169c34: 0x31823  negu        $v1, $v1
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x169c38: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x169c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169c3c: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x169C3Cu;
    {
        const bool branch_taken_0x169c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c3c) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169C44u;
    // 0x169c44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c48: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x169c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169c50: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c54: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169c58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c5c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x169c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x169c60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169c64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169c68: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x169c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x169c6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169c70: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x169c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x169c74: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x169C74u;
    {
        const bool branch_taken_0x169c74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c74) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169C7Cu;
    // 0x169c7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x169c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169c84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169c88: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x169c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169c8c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169c94: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x169c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x169c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169ca0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x169ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169ca4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169ca8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x169ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x169cac: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x169cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169cb0: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x169CB0u;
    {
        const bool branch_taken_0x169cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169cb0) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169CB8u;
    // 0x169cb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169cbc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x169cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169cc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169cc4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x169cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169cc8: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x169cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169ccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169cd0: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x169cd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x169cd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x169cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x169cd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x169cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169cdc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x169cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x169ce0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169ce4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x169ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x169ce8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x169CE8u;
    {
        const bool branch_taken_0x169ce8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ce8) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169CF0u;
    // 0x169cf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169cf4: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x169cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x169cf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169CF8u;
    {
        const bool branch_taken_0x169cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cf8) {
            ctx->pc = 0x169D20u;
            goto label_169d20;
        }
    }
    ctx->pc = 0x169D00u;
    // 0x169d00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d04: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x169d08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d0c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x169d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169d10: 0xc05a6e0  jal         func_169B80
    ctx->pc = 0x169D10u;
    SET_GPR_U32(ctx, 31, 0x169D18u);
    ctx->pc = 0x169B80u;
    goto label_169b80;
    ctx->pc = 0x169D18u;
label_169d18:
    // 0x169d18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x169D18u;
    {
        const bool branch_taken_0x169d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d18) {
            ctx->pc = 0x169D70u;
            goto label_169d70;
        }
    }
    ctx->pc = 0x169D20u;
label_169d20:
    // 0x169d20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x169d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d28: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169d2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169d30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169d34: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x169d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x169d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169d3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x169d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x169d40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d44: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169d4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d50: 0xac22bb30  sw          $v0, -0x44D0($at)
    ctx->pc = 0x169d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x169d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d58: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x169d5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d60: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x169d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x169d64: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x169d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169d68: 0xc05a794  jal         func_169E50
    ctx->pc = 0x169D68u;
    SET_GPR_U32(ctx, 31, 0x169D70u);
    ctx->pc = 0x169E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E50u, 0x169D68u, 0x169D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D70u;
label_169d70:
    // 0x169d70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d74: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x169d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x169d78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x169D78u;
    {
        const bool branch_taken_0x169d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d78) {
            ctx->pc = 0x169D9Cu;
            goto label_169d9c;
        }
    }
    ctx->pc = 0x169D80u;
    // 0x169d80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d88: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x169d8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169d90: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x169d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x169d94: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169b94;
        }
    }
    ctx->pc = 0x169D9Cu;
label_169d9c:
    // 0x169d9c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x169d9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169da0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x169da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x169da4: 0x3e00008  jr          $ra
    ctx->pc = 0x169DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169DACu;
}
