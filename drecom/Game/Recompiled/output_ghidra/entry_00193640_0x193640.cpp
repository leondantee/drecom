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

// Function: entry_00193640
// Address: 0x193640 - 0x1936a4
void entry_00193640_0x193640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193640_0x193640");
#endif

    ctx->pc = 0x193640u;

    // 0x193640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193644: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x193644u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x193648: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x19364c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193654: 0x0  nop
    ctx->pc = 0x193654u;
    // NOP
    // 0x193658: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x193658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19365c: 0x0  nop
    ctx->pc = 0x19365cu;
    // NOP
    // 0x193660: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x193660u;
    {
        const bool branch_taken_0x193660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193660) {
            ctx->pc = 0x1936A4u;
            return;
        }
    }
    ctx->pc = 0x193668u;
    // 0x193668: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x193668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x19366c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x19366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x193670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193674: 0x0  nop
    ctx->pc = 0x193674u;
    // NOP
    // 0x193678: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19367c: 0x0  nop
    ctx->pc = 0x19367cu;
    // NOP
    // 0x193680: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193680) {
            ctx->pc = 0x1936A4u;
            return;
        }
    }
    ctx->pc = 0x193688u;
    // 0x193688: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x19368c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193694: 0x0  nop
    ctx->pc = 0x193694u;
    // NOP
    // 0x193698: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x193698u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x19369c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19369Cu;
    {
        const bool branch_taken_0x19369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19369c) {
            ctx->pc = 0x1936F8u;
            return;
        }
    }
    ctx->pc = 0x1936A4u;
}
