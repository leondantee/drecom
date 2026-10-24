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

// Function: entry_001fe5b4
// Address: 0x1fe5b4 - 0x1fe660
void entry_001fe5b4_0x1fe5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe5b4_0x1fe5b4");
#endif

    ctx->pc = 0x1fe5b4u;

    // 0x1fe5b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5b8: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fe5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe5bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe5c0: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1fe5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe5c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5c8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe5cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe5d0: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1fe5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe5d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5d8: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1fe5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe5dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe5e0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fe5e4: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1fe5e8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe5ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5f0: 0xa065034b  sb          $a1, 0x34B($v1)
    ctx->pc = 0x1fe5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fe5f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe5f8: 0x90850346  lbu         $a1, 0x346($a0)
    ctx->pc = 0x1fe5f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe5fc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fe5fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe600: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1fe604: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe60c: 0x78720000  lq          $s2, 0x0($v1)
    ctx->pc = 0x1fe60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe610: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe614: 0x90850346  lbu         $a1, 0x346($a0)
    ctx->pc = 0x1fe614u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe618: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe61c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe620: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe624: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1fe624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fe628: 0x24c30480  addiu       $v1, $a2, 0x480
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1152));
    // 0x1fe62c: 0x7c720000  sq          $s2, 0x0($v1)
    ctx->pc = 0x1fe62cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 18));
    // 0x1fe630: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe634: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x1fe634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fe638: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe63c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe640: 0x90850347  lbu         $a1, 0x347($a0)
    ctx->pc = 0x1fe640u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 839)));
    // 0x1fe644: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1fe644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe648: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1fe648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fe64c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE64Cu;
    {
        const bool branch_taken_0x1fe64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe64c) {
            ctx->pc = 0x1FE660u;
            return;
        }
    }
    ctx->pc = 0x1FE654u;
    // 0x1fe654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fe654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe65c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1fe660u;
}
