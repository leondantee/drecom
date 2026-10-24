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

// Function: entry_00103f74
// Address: 0x103f74 - 0x103fd0
void entry_00103f74_0x103f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103f74_0x103f74");
#endif

    ctx->pc = 0x103f74u;

    // 0x103f74: 0x25e741f8  addiu       $a3, $t7, 0x41F8
    ctx->pc = 0x103f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103f78: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f7c: 0x8ce20280  lw          $v0, 0x280($a3)
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x103f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x103f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103f84: 0x8f243dac  lw          $a0, 0x3DAC($t9)
    ctx->pc = 0x103f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 15788)));
    // 0x103f88: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x103f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f8c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x103f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x103f90: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x103F90u;
    {
        const bool branch_taken_0x103f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x103F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F90u;
        // 0x103f94: 0xac540130  sw          $s4, 0x130($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f90) {
            ctx->pc = 0x103FD0u;
            return;
        }
    }
    ctx->pc = 0x103F98u;
    // 0x103f98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x103f9c: 0x8ce40280  lw          $a0, 0x280($a3)
    ctx->pc = 0x103f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x103fa0: 0x8c453e44  lw          $a1, 0x3E44($v0)
    ctx->pc = 0x103fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383E44u));
    // 0x103fa4: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x103fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x103fa8: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x103fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103fac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x103facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x103fb0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x103fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x103fb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x103fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x103fb8: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x103fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103fbc: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x103fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x103fc0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x103fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x103fc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103fc8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x103FC8u;
    {
        const bool branch_taken_0x103fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FC8u;
        // 0x103fcc: 0xac830128  sw          $v1, 0x128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fc8) {
            ctx->pc = 0x104020u;
            return;
        }
    }
    ctx->pc = 0x103FD0u;
}
