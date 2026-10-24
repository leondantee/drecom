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

// Function: entry_0033d548
// Address: 0x33d548 - 0x33d5a8
void entry_0033d548_0x33d548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d548_0x33d548");
#endif

    ctx->pc = 0x33d548u;

    // 0x33d548: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d54c: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x33d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d550: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x33d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x33d554: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x33d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x33d558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d55c: 0x0  nop
    ctx->pc = 0x33d55cu;
    // NOP
    // 0x33d560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33d560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d564: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x33d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x33d568: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d56c: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x33d570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d574: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x33d574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x33d578: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x33d578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33d57c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x33D57Cu;
    {
        const bool branch_taken_0x33d57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d57c) {
            ctx->pc = 0x33D5A8u;
            return;
        }
    }
    ctx->pc = 0x33D584u;
    // 0x33d584: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d588: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d58c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d590: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d594: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d598: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d59c: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x33d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x33d5a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d5a4: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x33d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    ctx->pc = 0x33d5a8u;
}
