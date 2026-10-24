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

// Function: entry_001a4988
// Address: 0x1a4988 - 0x1a4a20
void entry_001a4988_0x1a4988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4988_0x1a4988");
#endif

    ctx->pc = 0x1a4988u;

label_1a4988:
    // 0x1a4988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a498c: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a498cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a4990: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a4990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4994: 0x24a400cf  addiu       $a0, $a1, 0xCF
    ctx->pc = 0x1a4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 207));
    // 0x1a4998: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a499c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1a499cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a49a0: 0x0  nop
    ctx->pc = 0x1a49a0u;
    // NOP
    // 0x1a49a4: 0x0  nop
    ctx->pc = 0x1a49a4u;
    // NOP
    // 0x1a49a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1a49a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a49ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a49acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a49b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49b4: 0xa083031c  sb          $v1, 0x31C($a0)
    ctx->pc = 0x1a49b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a49b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49bc: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a49bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a49c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a49c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a49c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a49c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a49d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a49d4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a49d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49dc: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x1a49dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a49e0: 0x325bc  dsll32      $a0, $v1, 22
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a49e4: 0x436be  dsrl32      $a2, $a0, 26
    ctx->pc = 0x1a49e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) >> (32 + 26));
    // 0x1a49e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49ec: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a49f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a49f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49f8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a49fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a00: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a08: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x1a4a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a4a0c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x1a4a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a4a10: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x1a4a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4a14: 0x14c4ffdc  bne         $a2, $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A4A14u;
    {
        const bool branch_taken_0x1a4a14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a4a14) {
            ctx->pc = 0x1A4988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4988;
        }
    }
    ctx->pc = 0x1A4A1Cu;
    // 0x1a4a1c: 0x0  nop
    ctx->pc = 0x1a4a1cu;
    // NOP
    ctx->pc = 0x1a4a20u;
}
