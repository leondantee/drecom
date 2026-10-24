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

// Function: entry_001f9384
// Address: 0x1f9384 - 0x1f93c8
void entry_001f9384_0x1f9384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9384_0x1f9384");
#endif

    ctx->pc = 0x1f9384u;

    // 0x1f9384: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9388: 0x84a4002c  lh          $a0, 0x2C($a1)
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1f938c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f9390: 0xa4a3002c  sh          $v1, 0x2C($a1)
    ctx->pc = 0x1f9390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9394: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9394u;
    {
        const bool branch_taken_0x1f9394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9394) {
            ctx->pc = 0x1F93C8u;
            return;
        }
    }
    ctx->pc = 0x1F939Cu;
    // 0x1f939c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f93a4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x1f93a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f93a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f93ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f93acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f93b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f93b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f93b4: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x1f93b8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1f93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f93bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f93bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f93c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F93C0u;
    SET_GPR_U32(ctx, 31, 0x1F93C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F93C0u, 0x1F93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93C8u;
}
