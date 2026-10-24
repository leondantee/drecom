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

// Function: entry_00179968
// Address: 0x179968 - 0x1799b4
void entry_00179968_0x179968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179968_0x179968");
#endif

    switch (ctx->pc) {
        case 0x179980u: goto label_179980;
        default: break;
    }

    ctx->pc = 0x179968u;

    // 0x179968: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17996c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x17996cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x179970: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179974: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x179974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179978: 0xc0409c6  jal         func_102718
    ctx->pc = 0x179978u;
    SET_GPR_U32(ctx, 31, 0x179980u);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x179980u;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179980u) { return; }
    ctx->pc = 0x179980u;
label_179980:
    // 0x179980: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x179980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x179984: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x179984u;
    {
        const bool branch_taken_0x179984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179984) {
            ctx->pc = 0x1799B4u;
            return;
        }
    }
    ctx->pc = 0x17998Cu;
    // 0x17998c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x17998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x179990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179994: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x179994u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x179998: 0x0  nop
    ctx->pc = 0x179998u;
    // NOP
    // 0x17999c: 0x0  nop
    ctx->pc = 0x17999cu;
    // NOP
    // 0x1799a0: 0xa812  mflo        $s5
    ctx->pc = 0x1799a0u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1799a4: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x1799a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1799a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1799a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1799ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1799ACu;
    {
        const bool branch_taken_0x1799ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1799ac) {
            ctx->pc = 0x1799D8u;
            return;
        }
    }
    ctx->pc = 0x1799B4u;
}
