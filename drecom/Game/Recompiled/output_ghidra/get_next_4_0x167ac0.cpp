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

// Function: get_next_4
// Address: 0x167ac0 - 0x167cbc
void get_next_4_0x167ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_next_4_0x167ac0");
#endif

    switch (ctx->pc) {
        case 0x167ad4u: goto label_167ad4;
        case 0x167c58u: goto label_167c58;
        case 0x167c7cu: goto label_167c7c;
        default: break;
    }

    ctx->pc = 0x167ac0u;

label_167ac0:
    // 0x167ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167ac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x167ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x167ac8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x167ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x167acc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x167accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x167ad0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x167ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_167ad4:
    // 0x167ad4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167ad8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167adc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167ae0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x167ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167ae4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167ae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167aec: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x167aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x167af0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167af4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167af8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167afc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b00: 0x31823  negu        $v1, $v1
    ctx->pc = 0x167b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x167b04: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x167b04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167b08: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x167B08u;
    {
        const bool branch_taken_0x167b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b08) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167B10u;
    // 0x167b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167b1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x167b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b20: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b28: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x167b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x167b2c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167b30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167b34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x167b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b3c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x167b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167b40: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x167B40u;
    {
        const bool branch_taken_0x167b40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b40) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167B48u;
    // 0x167b48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b4c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x167b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167b50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167b54: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x167b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167b58: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b60: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x167b60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x167b64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167b68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167b6c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167b70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b74: 0x31823  negu        $v1, $v1
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x167b78: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x167b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167b7c: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x167B7Cu;
    {
        const bool branch_taken_0x167b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167b7c) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167B84u;
    // 0x167b84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b88: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x167b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167b8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167b90: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x167b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167b94: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167b9c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x167b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x167ba0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167ba8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x167ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167bac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167bb0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x167bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167bb4: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x167BB4u;
    {
        const bool branch_taken_0x167bb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167bb4) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167BBCu;
    // 0x167bbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167bc0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x167bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167bc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167bc8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x167bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167bcc: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167bd0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167bd4: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x167bd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x167bd8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167bdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167be0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167be4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167be8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x167be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x167bec: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x167becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x167bf0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x167BF0u;
    {
        const bool branch_taken_0x167bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167bf0) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167BF8u;
    // 0x167bf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167bfc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167c00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c04: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x167c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167c08: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x167c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167c0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c10: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x167c10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x167c14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x167c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x167c18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x167c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167c1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x167c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x167c20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167c24: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x167c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x167c28: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x167C28u;
    {
        const bool branch_taken_0x167c28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c28) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167C30u;
    // 0x167c30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c34: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x167c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x167c38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x167C38u;
    {
        const bool branch_taken_0x167c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c38) {
            ctx->pc = 0x167C60u;
            goto label_167c60;
        }
    }
    ctx->pc = 0x167C40u;
    // 0x167c40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c44: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167c48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x167c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167c4c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x167c50: 0xc059eb0  jal         func_167AC0
    ctx->pc = 0x167C50u;
    SET_GPR_U32(ctx, 31, 0x167C58u);
    ctx->pc = 0x167AC0u;
    goto label_167ac0;
    ctx->pc = 0x167C58u;
label_167c58:
    // 0x167c58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167C58u;
    {
        const bool branch_taken_0x167c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c58) {
            ctx->pc = 0x167C80u;
            goto label_167c80;
        }
    }
    ctx->pc = 0x167C60u;
label_167c60:
    // 0x167c60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c64: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167c68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c6c: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x167c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x167c70: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x167c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167c74: 0xc059f30  jal         func_167CC0
    ctx->pc = 0x167C74u;
    SET_GPR_U32(ctx, 31, 0x167C7Cu);
    ctx->pc = 0x167CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167CC0u, 0x167C74u, 0x167C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c84: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x167c88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x167C88u;
    {
        const bool branch_taken_0x167c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c88) {
            ctx->pc = 0x167CACu;
            goto label_167cac;
        }
    }
    ctx->pc = 0x167C90u;
    // 0x167c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c98: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x167c9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167ca0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x167ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x167ca4: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x167CA4u;
    {
        const bool branch_taken_0x167ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ca4) {
            ctx->pc = 0x167AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167ad4;
        }
    }
    ctx->pc = 0x167CACu;
label_167cac:
    // 0x167cac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x167cacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167cb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x167CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167CBCu;
}
