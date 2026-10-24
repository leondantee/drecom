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

// Function: entry_0022c634
// Address: 0x22c634 - 0x22c68c
void entry_0022c634_0x22c634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c634_0x22c634");
#endif

    ctx->pc = 0x22c634u;

    // 0x22c634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c638: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c63c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c640: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c644: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c64c: 0x0  nop
    ctx->pc = 0x22c64cu;
    // NOP
    // 0x22c650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c654: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c65c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c660: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c668: 0x0  nop
    ctx->pc = 0x22c668u;
    // NOP
    // 0x22c66c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c66cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c670: 0x0  nop
    ctx->pc = 0x22c670u;
    // NOP
    // 0x22c674: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22C674u;
    {
        const bool branch_taken_0x22c674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c674) {
            ctx->pc = 0x22C68Cu;
            return;
        }
    }
    ctx->pc = 0x22C67Cu;
    // 0x22c67c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c680: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c684: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c688: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x22c68cu;
}
