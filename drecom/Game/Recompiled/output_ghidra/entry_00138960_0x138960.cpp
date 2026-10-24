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

// Function: entry_00138960
// Address: 0x138960 - 0x138998
void entry_00138960_0x138960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138960_0x138960");
#endif

    ctx->pc = 0x138960u;

    // 0x138960: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138964: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x138968: 0x24834ec0  addiu       $v1, $a0, 0x4EC0
    ctx->pc = 0x138968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x13896c: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x13896cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138970: 0x92540000  lbu         $s4, 0x0($s2)
    ctx->pc = 0x138970u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x138974: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x138974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x138978: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13897c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138980: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138984: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138988: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13898c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13898cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138990: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138994: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x138994u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    ctx->pc = 0x138998u;
}
