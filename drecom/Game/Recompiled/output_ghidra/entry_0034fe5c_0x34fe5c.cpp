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

// Function: entry_0034fe5c
// Address: 0x34fe5c - 0x34ff30
void entry_0034fe5c_0x34fe5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fe5c_0x34fe5c");
#endif

    ctx->pc = 0x34fe5cu;

    // 0x34fe5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fe68: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x34fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x34fe6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34fe70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fe74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fe7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34fe80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fe84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34fe8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe90: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fe94: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fe98: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x34fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x34fe9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fea0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fea4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34fea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34fea8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34feac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34feb0: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34feb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34feb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34feb8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34febc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fec0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34fec4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fec8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fecc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fed0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fed4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fed8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34fedc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fee0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fee8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34feec: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34fef0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34fef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34fef4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34FEF4u;
    {
        const bool branch_taken_0x34fef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fef4) {
            ctx->pc = 0x34FF30u;
            return;
        }
    }
    ctx->pc = 0x34FEFCu;
    // 0x34fefc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff04: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34ff04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ff08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ff0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff14: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34ff14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ff18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ff1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ff20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ff24: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34ff24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ff28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34FF28u;
    {
        const bool branch_taken_0x34ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ff28) {
            ctx->pc = 0x34FF58u;
            return;
        }
    }
    ctx->pc = 0x34FF30u;
}
