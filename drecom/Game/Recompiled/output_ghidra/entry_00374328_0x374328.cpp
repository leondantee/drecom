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

// Function: entry_00374328
// Address: 0x374328 - 0x374388
void entry_00374328_0x374328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374328_0x374328");
#endif

    ctx->pc = 0x374328u;

    // 0x374328: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37432c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37432cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374330: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374338: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x374338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37433c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374344: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x374344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x374348: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37434c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37434cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374350: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374358: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x374358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37435c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x37435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374360: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374364: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x374364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x374368: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37436c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x37436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x374370: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x374370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x374374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x374378: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x374378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37437c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x37437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374380: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x374380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x374384: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x374384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x374388u;
}
