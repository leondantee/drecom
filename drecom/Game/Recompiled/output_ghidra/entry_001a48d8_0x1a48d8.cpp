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

// Function: entry_001a48d8
// Address: 0x1a48d8 - 0x1a4970
void entry_001a48d8_0x1a48d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a48d8_0x1a48d8");
#endif

    ctx->pc = 0x1a48d8u;

label_1a48d8:
    // 0x1a48d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48dc: 0x9064031c  lbu         $a0, 0x31C($v1)
    ctx->pc = 0x1a48dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a48e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a48e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a48e4: 0x246300d1  addiu       $v1, $v1, 0xD1
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 209));
    // 0x1a48e8: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a48ec: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1a48ecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a48f0: 0x0  nop
    ctx->pc = 0x1a48f0u;
    // NOP
    // 0x1a48f4: 0x0  nop
    ctx->pc = 0x1a48f4u;
    // NOP
    // 0x1a48f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1a48f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a48fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a48fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4900: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4904: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a4904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4908: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a490c: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a490cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a4910: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a491c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a4920: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4924: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a492c: 0x9464001a  lhu         $a0, 0x1A($v1)
    ctx->pc = 0x1a492cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a4930: 0x41dbc  dsll32      $v1, $a0, 22
    ctx->pc = 0x1a4930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a4934: 0x336be  dsrl32      $a2, $v1, 26
    ctx->pc = 0x1a4934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4938: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a493c: 0x8ca4030c  lw          $a0, 0x30C($a1)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 780)));
    // 0x1a4940: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4948: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a494c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4950: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4954: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4958: 0x9483001a  lhu         $v1, 0x1A($a0)
    ctx->pc = 0x1a4958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1a495c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x1a495cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a4960: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x1a4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4964: 0x14c3ffdc  bne         $a2, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A4964u;
    {
        const bool branch_taken_0x1a4964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4964) {
            ctx->pc = 0x1A48D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a48d8;
        }
    }
    ctx->pc = 0x1A496Cu;
    // 0x1a496c: 0x0  nop
    ctx->pc = 0x1a496cu;
    // NOP
    ctx->pc = 0x1a4970u;
}
