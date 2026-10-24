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

// Function: entry_0021e644
// Address: 0x21e644 - 0x21e6e0
void entry_0021e644_0x21e644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e644_0x21e644");
#endif

    switch (ctx->pc) {
        case 0x21e6d8u: goto label_21e6d8;
        default: break;
    }

    ctx->pc = 0x21e644u;

    // 0x21e644: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e648: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21e64c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x21e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x21e650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e658: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e65c: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x21e65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x21e660: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e664: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x21e668: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x21e668u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x21e66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e678: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x21e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x21e67c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21e680: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x21e680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21e684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e688: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e68c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x21e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x21e690: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e694: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e698: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21e69c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21e6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e6a4: 0x0  nop
    ctx->pc = 0x21e6a4u;
    // NOP
    // 0x21e6a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e6ac: 0x0  nop
    ctx->pc = 0x21e6acu;
    // NOP
    // 0x21e6b0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x21E6B0u;
    {
        const bool branch_taken_0x21e6b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e6b0) {
            ctx->pc = 0x21E6E0u;
            return;
        }
    }
    ctx->pc = 0x21E6B8u;
    // 0x21e6b8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x21e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x21e6bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x21e6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e6c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e6c8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e6cc: 0x24050320  addiu       $a1, $zero, 0x320
    ctx->pc = 0x21e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x21e6d0: 0xc0c4864  jal         func_312190
    ctx->pc = 0x21E6D0u;
    SET_GPR_U32(ctx, 31, 0x21E6D8u);
    ctx->pc = 0x312190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312190u, 0x21E6D0u, 0x21E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6D8u;
label_21e6d8:
    // 0x21e6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E6D8u;
    {
        const bool branch_taken_0x21e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e6d8) {
            ctx->pc = 0x21E6F8u;
            return;
        }
    }
    ctx->pc = 0x21E6E0u;
}
