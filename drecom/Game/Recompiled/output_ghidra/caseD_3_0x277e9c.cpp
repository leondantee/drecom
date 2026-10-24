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

// Function: caseD_3
// Address: 0x277e9c - 0x277f40
void caseD_3_0x277e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x277e9c");
#endif

    ctx->pc = 0x277e9cu;

    // 0x277e9c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x277e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277ea0: 0x3c02c590  lui         $v0, 0xC590
    ctx->pc = 0x277ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50576 << 16));
    // 0x277ea4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x277ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x277ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277eac: 0x0  nop
    ctx->pc = 0x277eacu;
    // NOP
    // 0x277eb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277eb4: 0x0  nop
    ctx->pc = 0x277eb4u;
    // NOP
    // 0x277eb8: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
    ctx->pc = 0x277EB8u;
    {
        const bool branch_taken_0x277eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277eb8) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277EC0u;
    // 0x277ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ec4: 0x0  nop
    ctx->pc = 0x277ec4u;
    // NOP
    // 0x277ec8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ed0: 0x0  nop
    ctx->pc = 0x277ed0u;
    // NOP
    // 0x277ed4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x277ed8: 0x3c024055  lui         $v0, 0x4055
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16469 << 16));
    // 0x277edc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x277edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x277ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ee4: 0x0  nop
    ctx->pc = 0x277ee4u;
    // NOP
    // 0x277ee8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x277eec: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x277eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x277ef0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x277ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x277ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ef8: 0x0  nop
    ctx->pc = 0x277ef8u;
    // NOP
    // 0x277efc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f04: 0x0  nop
    ctx->pc = 0x277f04u;
    // NOP
    // 0x277f08: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f10: 0x0  nop
    ctx->pc = 0x277f10u;
    // NOP
    // 0x277f14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277f1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277f20: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x277f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A40u, _value); } while (0);
    // 0x277f24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277f28: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277f28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A38u));
    // 0x277f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277f30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277f34: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x277f38: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x277F38u;
    {
        const bool branch_taken_0x277f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f38) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277F40u;
}
