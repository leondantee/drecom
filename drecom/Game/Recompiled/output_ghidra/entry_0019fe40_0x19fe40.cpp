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

// Function: entry_0019fe40
// Address: 0x19fe40 - 0x19fea0
void entry_0019fe40_0x19fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe40_0x19fe40");
#endif

    ctx->pc = 0x19fe40u;

    // 0x19fe40: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x19fe44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19fe48: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19fe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19fe4c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x19fe50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe54: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fe58: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe5c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x19fe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x19fe60: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x19fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fe64: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x19fe64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe68: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19fe68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19fe6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fe70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x19fe70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19fe74: 0x0  nop
    ctx->pc = 0x19fe74u;
    // NOP
    // 0x19fe78: 0x0  nop
    ctx->pc = 0x19fe78u;
    // NOP
    // 0x19fe7c: 0x9810  mfhi        $s3
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x19fe80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fe84: 0x12630006  beq         $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FE84u;
    {
        const bool branch_taken_0x19fe84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fe84) {
            ctx->pc = 0x19FEA0u;
            return;
        }
    }
    ctx->pc = 0x19FE8Cu;
    // 0x19fe8c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x19fe90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19fe90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19fe94: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x19fe94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x19fe98: 0xc0c56f0  jal         func_315BC0
    ctx->pc = 0x19FE98u;
    SET_GPR_U32(ctx, 31, 0x19FEA0u);
    ctx->pc = 0x315BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BC0u, 0x19FE98u, 0x19FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEA0u;
}
