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

// Function: entry_001afbd8
// Address: 0x1afbd8 - 0x1afc60
void entry_001afbd8_0x1afbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbd8_0x1afbd8");
#endif

    ctx->pc = 0x1afbd8u;

    // 0x1afbd8: 0x96630006  lhu         $v1, 0x6($s3)
    ctx->pc = 0x1afbd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1afbdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1afbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1afbe0: 0x1683002d  bne         $s4, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AFBE0u;
    {
        const bool branch_taken_0x1afbe0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afbe0) {
            ctx->pc = 0x1AFC98u;
            return;
        }
    }
    ctx->pc = 0x1AFBE8u;
    // 0x1afbe8: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afbe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afbec: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afbf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afbf4: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x1afbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afbf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afbfc: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x1afbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x1afc00: 0x8ca30090  lw          $v1, 0x90($a1)
    ctx->pc = 0x1afc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1afc04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1afc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1afc08: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AFC08u;
    {
        const bool branch_taken_0x1afc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc08) {
            ctx->pc = 0x1AFC98u;
            return;
        }
    }
    ctx->pc = 0x1AFC10u;
    // 0x1afc10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afc14: 0x2832804  sllv        $a1, $v1, $s4
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
    // 0x1afc18: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1afc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1afc1c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1afc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1afc20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afc24: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1afc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1afc28: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1afc2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1afc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1afc30: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x1afc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x1afc34: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1afc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1afc38: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AFC38u;
    {
        const bool branch_taken_0x1afc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc38) {
            ctx->pc = 0x1AFC90u;
            return;
        }
    }
    ctx->pc = 0x1AFC40u;
    // 0x1afc40: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1afc40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1afc44: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1afc48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1afc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1afc4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1afc50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1afc54: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1afc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1afc58: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1afc58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1afc5c: 0x0  nop
    ctx->pc = 0x1afc5cu;
    // NOP
    ctx->pc = 0x1afc60u;
}
