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

// Function: entry_002632d0
// Address: 0x2632d0 - 0x263340
void entry_002632d0_0x2632d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002632d0_0x2632d0");
#endif

    ctx->pc = 0x2632d0u;

    // 0x2632d0: 0x1560001b  bnez        $t3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2632D0u;
    {
        const bool branch_taken_0x2632d0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2632d0) {
            ctx->pc = 0x263340u;
            return;
        }
    }
    ctx->pc = 0x2632D8u;
    // 0x2632d8: 0x460b5001  sub.s       $f0, $f10, $f11
    ctx->pc = 0x2632d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
    // 0x2632dc: 0x460b6041  sub.s       $f1, $f12, $f11
    ctx->pc = 0x2632dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x2632e0: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2632e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2632e4: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x2632e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x2632e8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2632e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2632ec: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2632ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2632f0: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x2632f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2632f4: 0x46001982  mul.s       $f6, $f3, $f0
    ctx->pc = 0x2632f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2632f8: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x2632f8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2632fc: 0x460131c2  mul.s       $f7, $f6, $f1
    ctx->pc = 0x2632fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x263300: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x263300u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x263304: 0x46021a02  mul.s       $f8, $f3, $f2
    ctx->pc = 0x263304u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x263308: 0x46084240  add.s       $f9, $f8, $f8
    ctx->pc = 0x263308u;
    ctx->f[9] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x26330c: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x26330cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x263310: 0x46083a41  sub.s       $f9, $f7, $f8
    ctx->pc = 0x263310u;
    ctx->f[9] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x263314: 0x46044a40  add.s       $f9, $f9, $f4
    ctx->pc = 0x263314u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x263318: 0x46074041  sub.s       $f1, $f8, $f7
    ctx->pc = 0x263318u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x26331c: 0x46053081  sub.s       $f2, $f6, $f5
    ctx->pc = 0x26331cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x263320: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x263320u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x263324: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x263324u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263328: 0x460530c1  sub.s       $f3, $f6, $f5
    ctx->pc = 0x263328u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x26332c: 0x4609681a  mula.s      $f13, $f9
    ctx->pc = 0x26332cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[13], ctx->f[9]));
    // 0x263330: 0x4601701e  madda.s     $f14, $f1
    ctx->pc = 0x263330u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[14], ctx->f[1])));
    // 0x263334: 0x4602781e  madda.s     $f15, $f2
    ctx->pc = 0x263334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[15], ctx->f[2])));
    // 0x263338: 0x4603805c  madd.s      $f1, $f16, $f3
    ctx->pc = 0x263338u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[16], ctx->f[3]));
    // 0x26333c: 0x0  nop
    ctx->pc = 0x26333cu;
    // NOP
    ctx->pc = 0x263340u;
}
