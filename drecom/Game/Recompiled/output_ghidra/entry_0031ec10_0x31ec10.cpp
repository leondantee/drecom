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

// Function: entry_0031ec10
// Address: 0x31ec10 - 0x31ec34
void entry_0031ec10_0x31ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ec10_0x31ec10");
#endif

    ctx->pc = 0x31ec10u;

    // 0x31ec10: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31ec14: 0x9422af66  lhu         $v0, -0x509A($at)
    ctx->pc = 0x31ec14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31ec18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ec1c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x31ec1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ec20: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x31EC20u;
    {
        const bool branch_taken_0x31ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec20) {
            ctx->pc = 0x31EE8Cu;
            return;
        }
    }
    ctx->pc = 0x31EC28u;
    // 0x31ec28: 0x24122710  addiu       $s2, $zero, 0x2710
    ctx->pc = 0x31ec28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x31ec2c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x31ec2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31ec30: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31ec30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31ec34u;
}
