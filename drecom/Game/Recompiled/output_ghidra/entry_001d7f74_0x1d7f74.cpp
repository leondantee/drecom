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

// Function: entry_001d7f74
// Address: 0x1d7f74 - 0x1d7ff8
void entry_001d7f74_0x1d7f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f74_0x1d7f74");
#endif

    ctx->pc = 0x1d7f74u;

    // 0x1d7f74: 0x8eb00068  lw          $s0, 0x68($s5)
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1d7f78: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1d7f78u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d7f7c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7f80: 0x8ea200a8  lw          $v0, 0xA8($s5)
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
    // 0x1d7f84: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d7f88: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d7f8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d7f90: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1d7f94: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1d7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1d7f98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d7f9c: 0x8c510030  lw          $s1, 0x30($v0)
    ctx->pc = 0x1d7f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1d7fa0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d7fa4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d7fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d7fa8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fb4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7FB4u;
    {
        const bool branch_taken_0x1d7fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7fb4) {
            ctx->pc = 0x1D7FF8u;
            return;
        }
    }
    ctx->pc = 0x1D7FBCu;
    // 0x1d7fbc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d7fc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7fc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d7fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d7fc8: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x1d7fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d7fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fd0: 0x0  nop
    ctx->pc = 0x1d7fd0u;
    // NOP
    // 0x1d7fd4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d7fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d7fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fdc: 0x0  nop
    ctx->pc = 0x1d7fdcu;
    // NOP
    // 0x1d7fe0: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1d7fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1d7fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fe8: 0x0  nop
    ctx->pc = 0x1d7fe8u;
    // NOP
    // 0x1d7fec: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1d7fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1d7ff0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D7FF0u;
    {
        const bool branch_taken_0x1d7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ff0) {
            ctx->pc = 0x1D8030u;
            return;
        }
    }
    ctx->pc = 0x1D7FF8u;
}
