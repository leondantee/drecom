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

// Function: entry_00175638
// Address: 0x175638 - 0x175690
void entry_00175638_0x175638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175638_0x175638");
#endif

    ctx->pc = 0x175638u;

    // 0x175638: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x175638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x17563c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175640: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x175640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175644: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x175644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175648: 0x0  nop
    ctx->pc = 0x175648u;
    // NOP
    // 0x17564c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x17564Cu;
    {
        const bool branch_taken_0x17564c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17564c) {
            ctx->pc = 0x1756C0u;
            return;
        }
    }
    ctx->pc = 0x175654u;
    // 0x175654: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x175654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175658: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x17565c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17565cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175660: 0x0  nop
    ctx->pc = 0x175660u;
    // NOP
    // 0x175664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x175664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175668: 0x0  nop
    ctx->pc = 0x175668u;
    // NOP
    // 0x17566c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x17566Cu;
    {
        const bool branch_taken_0x17566c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17566c) {
            ctx->pc = 0x175690u;
            return;
        }
    }
    ctx->pc = 0x175674u;
    // 0x175674: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175678: 0xa020cc95  sb          $zero, -0x336B($at)
    ctx->pc = 0x175678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x17567c: 0x2402ff42  addiu       $v0, $zero, -0xBE
    ctx->pc = 0x17567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967106));
    // 0x175680: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175684: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x175684u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
    // 0x175688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x175688u;
    {
        const bool branch_taken_0x175688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175688) {
            ctx->pc = 0x1756ACu;
            return;
        }
    }
    ctx->pc = 0x175690u;
}
