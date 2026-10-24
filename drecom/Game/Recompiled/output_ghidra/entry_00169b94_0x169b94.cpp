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

// Function: entry_00169b94
// Address: 0x169b94 - 0x169d20
void entry_00169b94_0x169b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169b94_0x169b94");
#endif

    switch (ctx->pc) {
        case 0x169d18u: goto label_169d18;
        default: break;
    }

    ctx->pc = 0x169b94u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B80u, 0x169D10u, 0x169D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D18u;
label_169d18:
    // 0x169d18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x169D18u;
    {
        const bool branch_taken_0x169d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d18) {
            ctx->pc = 0x169D70u;
            return;
        }
    }
    ctx->pc = 0x169D20u;
}
