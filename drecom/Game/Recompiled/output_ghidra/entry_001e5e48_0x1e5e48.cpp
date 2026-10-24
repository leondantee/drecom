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

// Function: entry_001e5e48
// Address: 0x1e5e48 - 0x1e5f08
void entry_001e5e48_0x1e5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5e48_0x1e5e48");
#endif

    ctx->pc = 0x1e5e48u;

    // 0x1e5e48: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e5e4c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e5e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e5e50: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e54: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1e5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e5e58: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e5c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e60: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5e64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5e68: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e6c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1e5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e5e70: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e74: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e78: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5e7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e5e80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e84: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e5e88: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e8c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5e90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5e94: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e5e98: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e5e98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e9c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e5e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1e5ea0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5ea4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5ea8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e5eac: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1e5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5eb0: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5eb4: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e5eb8: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5ebc: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e5ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ec0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e5ec4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1e5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e5ec8: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e5ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ecc: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1e5ed0: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e5ed4: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ed8: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e5ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e5edc: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e5edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5ee0: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ee4: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5EE4u;
    {
        const bool branch_taken_0x1e5ee4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e5ee4) {
            ctx->pc = 0x1E5F08u;
            return;
        }
    }
    ctx->pc = 0x1E5EECu;
    // 0x1e5eec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5ef0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5ef4: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e5ef8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e5ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e5efc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5efcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F00u;
    {
        const bool branch_taken_0x1e5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f00) {
            ctx->pc = 0x1E5F20u;
            return;
        }
    }
    ctx->pc = 0x1E5F08u;
}
