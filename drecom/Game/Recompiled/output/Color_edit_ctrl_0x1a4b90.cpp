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

// Function: Color_edit_ctrl
// Address: 0x1a4b90 - 0x1a4ec8
void Color_edit_ctrl_0x1a4b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color_edit_ctrl_0x1a4b90");
#endif

    ctx->pc = 0x1a4b90u;

    // 0x1a4b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4b94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1a4b98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4b9c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4ba0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4ba4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1a4ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1a4ba8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BA8u;
    {
        const bool branch_taken_0x1a4ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ba8) {
            ctx->pc = 0x1A4BC0u;
            goto label_1a4bc0;
        }
    }
    ctx->pc = 0x1A4BB0u;
    // 0x1a4bb0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4bb4: 0x80830304  lb          $v1, 0x304($a0)
    ctx->pc = 0x1a4bb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x1a4bb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4bbc: 0xa0830304  sb          $v1, 0x304($a0)
    ctx->pc = 0x1a4bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 772), (uint8_t)GPR_U32(ctx, 3));
label_1a4bc0:
    // 0x1a4bc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4bc4: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4bc8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4bcc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a4bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a4bd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BD0u;
    {
        const bool branch_taken_0x1a4bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bd0) {
            ctx->pc = 0x1A4BE8u;
            goto label_1a4be8;
        }
    }
    ctx->pc = 0x1A4BD8u;
    // 0x1a4bd8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4bdc: 0x80830304  lb          $v1, 0x304($a0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x1a4be0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4be4: 0xa0830304  sb          $v1, 0x304($a0)
    ctx->pc = 0x1a4be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 772), (uint8_t)GPR_U32(ctx, 3));
label_1a4be8:
    // 0x1a4be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4bec: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4becu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4bf0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4bf4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1a4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1a4bf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4BF8u;
    {
        const bool branch_taken_0x1a4bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bf8) {
            ctx->pc = 0x1A4C10u;
            goto label_1a4c10;
        }
    }
    ctx->pc = 0x1A4C00u;
    // 0x1a4c00: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c04: 0x80830305  lb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 773)));
    // 0x1a4c08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4c0c: 0xa0830305  sb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 773), (uint8_t)GPR_U32(ctx, 3));
label_1a4c10:
    // 0x1a4c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c14: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4c14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4c18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c1c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1a4c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1a4c20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4C20u;
    {
        const bool branch_taken_0x1a4c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c20) {
            ctx->pc = 0x1A4C38u;
            goto label_1a4c38;
        }
    }
    ctx->pc = 0x1A4C28u;
    // 0x1a4c28: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c2c: 0x80830305  lb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 773)));
    // 0x1a4c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4c34: 0xa0830305  sb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 773), (uint8_t)GPR_U32(ctx, 3));
label_1a4c38:
    // 0x1a4c38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c3c: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4c3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4c40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c44: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1a4c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1a4c48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4C48u;
    {
        const bool branch_taken_0x1a4c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c48) {
            ctx->pc = 0x1A4C58u;
            goto label_1a4c58;
        }
    }
    ctx->pc = 0x1A4C50u;
    // 0x1a4c50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c54: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a4c58:
    // 0x1a4c58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c5c: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4c60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c64: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a4c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a4c68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4C68u;
    {
        const bool branch_taken_0x1a4c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c68) {
            ctx->pc = 0x1A4C8Cu;
            goto label_1a4c8c;
        }
    }
    ctx->pc = 0x1A4C70u;
    // 0x1a4c70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c74: 0x90630318  lbu         $v1, 0x318($v1)
    ctx->pc = 0x1a4c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 792)));
    // 0x1a4c78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a4c78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4c7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4c80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4c84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c88: 0xa0640318  sb          $a0, 0x318($v1)
    ctx->pc = 0x1a4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 792), (uint8_t)GPR_U32(ctx, 4));
label_1a4c8c:
    // 0x1a4c8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c90: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a4c90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4c94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c98: 0x942300da  lhu         $v1, 0xDA($at)
    ctx->pc = 0x1a4c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DAu));
    // 0x1a4c9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4ca0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1a4ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1a4ca4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CA4u;
    {
        const bool branch_taken_0x1a4ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ca4) {
            ctx->pc = 0x1A4CBCu;
            goto label_1a4cbc;
        }
    }
    ctx->pc = 0x1A4CACu;
    // 0x1a4cac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4cb0: 0x84830308  lh          $v1, 0x308($a0)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 776)));
    // 0x1a4cb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4cb8: 0xa4830308  sh          $v1, 0x308($a0)
    ctx->pc = 0x1a4cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 776), (uint16_t)GPR_U32(ctx, 3));
label_1a4cbc:
    // 0x1a4cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4cc0: 0x942300da  lhu         $v1, 0xDA($at)
    ctx->pc = 0x1a4cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DAu));
    // 0x1a4cc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4cc8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1a4cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1a4ccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4CCCu;
    {
        const bool branch_taken_0x1a4ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ccc) {
            ctx->pc = 0x1A4CE4u;
            goto label_1a4ce4;
        }
    }
    ctx->pc = 0x1A4CD4u;
    // 0x1a4cd4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4cd8: 0x84830308  lh          $v1, 0x308($a0)
    ctx->pc = 0x1a4cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 776)));
    // 0x1a4cdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4ce0: 0xa4830308  sh          $v1, 0x308($a0)
    ctx->pc = 0x1a4ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 776), (uint16_t)GPR_U32(ctx, 3));
label_1a4ce4:
    // 0x1a4ce4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4ce8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4ce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4cec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4cf0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1a4cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1a4cf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4CF4u;
    {
        const bool branch_taken_0x1a4cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4cf4) {
            ctx->pc = 0x1A4D14u;
            goto label_1a4d14;
        }
    }
    ctx->pc = 0x1A4CFCu;
    // 0x1a4cfc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d00: 0x90830306  lbu         $v1, 0x306($a0)
    ctx->pc = 0x1a4d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 774)));
    // 0x1a4d04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4d08: 0xa0830306  sb          $v1, 0x306($a0)
    ctx->pc = 0x1a4d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 774), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4d0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d10: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a4d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
label_1a4d14:
    // 0x1a4d14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4d18: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4d1c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4d20: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1a4d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1a4d24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4D24u;
    {
        const bool branch_taken_0x1a4d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d24) {
            ctx->pc = 0x1A4D44u;
            goto label_1a4d44;
        }
    }
    ctx->pc = 0x1A4D2Cu;
    // 0x1a4d2c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d30: 0x90830306  lbu         $v1, 0x306($a0)
    ctx->pc = 0x1a4d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 774)));
    // 0x1a4d34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4d38: 0xa0830306  sb          $v1, 0x306($a0)
    ctx->pc = 0x1a4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 774), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a4d3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d40: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a4d40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
label_1a4d44:
    // 0x1a4d44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d48: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a4d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a4d4c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4D4Cu;
    {
        const bool branch_taken_0x1a4d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d4c) {
            ctx->pc = 0x1A4DECu;
            goto label_1a4dec;
        }
    }
    ctx->pc = 0x1A4D54u;
    // 0x1a4d54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d58: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4d5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4d60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4d60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4d64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D64u;
    {
        const bool branch_taken_0x1a4d64 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4d64) {
            ctx->pc = 0x1A4D74u;
            goto label_1a4d74;
        }
    }
    ctx->pc = 0x1A4D6Cu;
    // 0x1a4d6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d70: 0xa0600304  sb          $zero, 0x304($v1)
    ctx->pc = 0x1a4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 0));
label_1a4d74:
    // 0x1a4d74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d78: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4d7c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4d80: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4d80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4d84: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a4d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4d88: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4D88u;
    {
        const bool branch_taken_0x1a4d88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4d88) {
            ctx->pc = 0x1A4D9Cu;
            goto label_1a4d9c;
        }
    }
    ctx->pc = 0x1A4D90u;
    // 0x1a4d90: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4d94: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4d98: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
label_1a4d9c:
    // 0x1a4d9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4da0: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4da4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4da8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4da8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DACu;
    {
        const bool branch_taken_0x1a4dac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4dac) {
            ctx->pc = 0x1A4DBCu;
            goto label_1a4dbc;
        }
    }
    ctx->pc = 0x1A4DB4u;
    // 0x1a4db4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4db8: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
label_1a4dbc:
    // 0x1a4dbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4dc0: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4dc4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4dc8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dcc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a4dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4dd0: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A4DD0u;
    {
        const bool branch_taken_0x1a4dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dd0) {
            ctx->pc = 0x1A4E7Cu;
            goto label_1a4e7c;
        }
    }
    ctx->pc = 0x1A4DD8u;
    // 0x1a4dd8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a4dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a4ddc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4de0: 0xa0640305  sb          $a0, 0x305($v1)
    ctx->pc = 0x1a4de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4de4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A4DE4u;
    {
        const bool branch_taken_0x1a4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4de4) {
            ctx->pc = 0x1A4E7Cu;
            goto label_1a4e7c;
        }
    }
    ctx->pc = 0x1A4DECu;
label_1a4dec:
    // 0x1a4dec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4df0: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4df4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4df8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4df8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dfc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DFCu;
    {
        const bool branch_taken_0x1a4dfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4dfc) {
            ctx->pc = 0x1A4E0Cu;
            goto label_1a4e0c;
        }
    }
    ctx->pc = 0x1A4E04u;
    // 0x1a4e04: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e08: 0xa0600304  sb          $zero, 0x304($v1)
    ctx->pc = 0x1a4e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 0));
label_1a4e0c:
    // 0x1a4e0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e10: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4e10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4e14: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e18: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e1c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1a4e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a4e20: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E20u;
    {
        const bool branch_taken_0x1a4e20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e20) {
            ctx->pc = 0x1A4E34u;
            goto label_1a4e34;
        }
    }
    ctx->pc = 0x1A4E28u;
    // 0x1a4e28: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1a4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4e2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e30: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
label_1a4e34:
    // 0x1a4e34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e38: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4e3c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e40: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e44: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E44u;
    {
        const bool branch_taken_0x1a4e44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4e44) {
            ctx->pc = 0x1A4E54u;
            goto label_1a4e54;
        }
    }
    ctx->pc = 0x1A4E4Cu;
    // 0x1a4e4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e50: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
label_1a4e54:
    // 0x1a4e54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e58: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4e5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e64: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1a4e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a4e68: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E68u;
    {
        const bool branch_taken_0x1a4e68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e68) {
            ctx->pc = 0x1A4E7Cu;
            goto label_1a4e7c;
        }
    }
    ctx->pc = 0x1A4E70u;
    // 0x1a4e70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4e74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e78: 0xa0640305  sb          $a0, 0x305($v1)
    ctx->pc = 0x1a4e78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 4));
label_1a4e7c:
    // 0x1a4e7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e80: 0x90630306  lbu         $v1, 0x306($v1)
    ctx->pc = 0x1a4e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 774)));
    // 0x1a4e84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4e88: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a4e8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E8Cu;
    {
        const bool branch_taken_0x1a4e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e8c) {
            ctx->pc = 0x1A4EA0u;
            goto label_1a4ea0;
        }
    }
    ctx->pc = 0x1A4E94u;
    // 0x1a4e94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4e98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e9c: 0xa0640306  sb          $a0, 0x306($v1)
    ctx->pc = 0x1a4e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 774), (uint8_t)GPR_U32(ctx, 4));
label_1a4ea0:
    // 0x1a4ea0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4ea4: 0x90630306  lbu         $v1, 0x306($v1)
    ctx->pc = 0x1a4ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 774)));
    // 0x1a4ea8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4eac: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EACu;
    {
        const bool branch_taken_0x1a4eac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a4eac) {
            ctx->pc = 0x1A4EBCu;
            goto label_1a4ebc;
        }
    }
    ctx->pc = 0x1A4EB4u;
    // 0x1a4eb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4eb8: 0xa0600306  sb          $zero, 0x306($v1)
    ctx->pc = 0x1a4eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 774), (uint8_t)GPR_U32(ctx, 0));
label_1a4ebc:
    // 0x1a4ebc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a4ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4EC8u;
}
