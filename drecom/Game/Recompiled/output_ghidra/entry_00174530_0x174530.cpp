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

// Function: entry_00174530
// Address: 0x174530 - 0x174578
void entry_00174530_0x174530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174530_0x174530");
#endif

    ctx->pc = 0x174530u;

label_174530:
    // 0x174530: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x174530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174534: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x174534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174538: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x174538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17453c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x17453cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x174540: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x174540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x174544: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x174544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x174548: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17454c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x174550: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x174550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x174554: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x174554u;
    {
        const bool branch_taken_0x174554 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x174554) {
            ctx->pc = 0x174530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174530;
        }
    }
    ctx->pc = 0x17455Cu;
    // 0x17455c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x174560: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x174564: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x174568: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x17456c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x174570: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x174574: 0xac720028  sw          $s2, 0x28($v1)
    ctx->pc = 0x174574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 18));
    ctx->pc = 0x174578u;
}
