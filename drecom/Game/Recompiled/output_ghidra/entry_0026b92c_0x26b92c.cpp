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

// Function: entry_0026b92c
// Address: 0x26b92c - 0x26b98c
void entry_0026b92c_0x26b92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b92c_0x26b92c");
#endif

    switch (ctx->pc) {
        case 0x26b984u: goto label_26b984;
        default: break;
    }

    ctx->pc = 0x26b92cu;

    // 0x26b92c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b930: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x26b930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x26b934: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26b938: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26b938u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26b93c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26b93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26b940: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
    ctx->pc = 0x26B940u;
    {
        const bool branch_taken_0x26b940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b940) {
            ctx->pc = 0x26BEDCu;
            return;
        }
    }
    ctx->pc = 0x26B948u;
    // 0x26b948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b94c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26b950: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x26b950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x26b954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26b95c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b960: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x26b960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x26b964: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x26b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x26b968: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26b968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26b96c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26b96cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b970: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b974: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x26b974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x26b978: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x26b978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26b97c: 0xc086488  jal         func_219220
    ctx->pc = 0x26B97Cu;
    SET_GPR_U32(ctx, 31, 0x26B984u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x26B97Cu, 0x26B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B984u;
label_26b984:
    // 0x26b984: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x26B984u;
    {
        const bool branch_taken_0x26b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b984) {
            ctx->pc = 0x26BEDCu;
            return;
        }
    }
    ctx->pc = 0x26B98Cu;
}
