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

// Function: entry_0025f4b8
// Address: 0x25f4b8 - 0x25f518
void entry_0025f4b8_0x25f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f4b8_0x25f4b8");
#endif

    ctx->pc = 0x25f4b8u;

    // 0x25f4b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4bc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f4c0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f4c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f4c8: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f4cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f4d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f4d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25f4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25f4d8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4dc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f4e0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f4e8: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f4ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f4f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f4f4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25f4f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f4fc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x25f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25f500: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25f504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25f504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f508: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25f50c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25f510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25f514: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25f514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x25f518u;
}
