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

// Function: entry_001cb348
// Address: 0x1cb348 - 0x1cb3a4
void entry_001cb348_0x1cb348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb348_0x1cb348");
#endif

    switch (ctx->pc) {
        case 0x1cb360u: goto label_1cb360;
        default: break;
    }

    ctx->pc = 0x1cb348u;

    // 0x1cb348: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb350: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb354: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb358: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB358u;
    SET_GPR_U32(ctx, 31, 0x1CB360u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB358u, 0x1CB360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB360u;
label_1cb360:
    // 0x1cb360: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb364: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb368: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1cb368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1cb36c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb370: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cb370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb374: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1cb378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb37c: 0x0  nop
    ctx->pc = 0x1cb37cu;
    // NOP
    // 0x1cb380: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb384: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cb388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb38c: 0x0  nop
    ctx->pc = 0x1cb38cu;
    // NOP
    // 0x1cb390: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB390u;
    {
        const bool branch_taken_0x1cb390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb390) {
            ctx->pc = 0x1CB3A4u;
            return;
        }
    }
    ctx->pc = 0x1CB398u;
    // 0x1cb398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3a0: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cb3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1cb3a4u;
}
