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

// Function: entry_00180928
// Address: 0x180928 - 0x180964
void entry_00180928_0x180928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180928_0x180928");
#endif

    ctx->pc = 0x180928u;

    // 0x180928: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x180928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18092c: 0x2463f160  addiu       $v1, $v1, -0xEA0
    ctx->pc = 0x18092cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963552));
    // 0x180930: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180930u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x47F160u));
    // 0x180934: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180938: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180938u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18093c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180940: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180940u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180944: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180948: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x180948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18094c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x18094cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180950: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x180954: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x180958: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18095c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x18095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x180960: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x180960u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->pc = 0x180964u;
}
