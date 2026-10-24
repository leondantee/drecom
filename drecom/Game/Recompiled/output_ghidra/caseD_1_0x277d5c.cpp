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

// Function: caseD_1
// Address: 0x277d5c - 0x277e04
void caseD_1_0x277d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x277d5c");
#endif

    ctx->pc = 0x277d5cu;

    // 0x277d5c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x277d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277d60: 0x3c02c597  lui         $v0, 0xC597
    ctx->pc = 0x277d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50583 << 16));
    // 0x277d64: 0x3442d733  ori         $v0, $v0, 0xD733
    ctx->pc = 0x277d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55091);
    // 0x277d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d6c: 0x0  nop
    ctx->pc = 0x277d6cu;
    // NOP
    // 0x277d70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x277d70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x277d74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x277d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x277d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d7c: 0x0  nop
    ctx->pc = 0x277d7cu;
    // NOP
    // 0x277d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277d84: 0x0  nop
    ctx->pc = 0x277d84u;
    // NOP
    // 0x277d88: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
    ctx->pc = 0x277D88u;
    {
        const bool branch_taken_0x277d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277d88) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277D90u;
    // 0x277d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d94: 0x0  nop
    ctx->pc = 0x277d94u;
    // NOP
    // 0x277d98: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277d9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277da0: 0x0  nop
    ctx->pc = 0x277da0u;
    // NOP
    // 0x277da4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x277da8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x277dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277db0: 0x0  nop
    ctx->pc = 0x277db0u;
    // NOP
    // 0x277db4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x277db8: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x277db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x277dbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x277dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x277dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277dc4: 0x0  nop
    ctx->pc = 0x277dc4u;
    // NOP
    // 0x277dc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277dd0: 0x0  nop
    ctx->pc = 0x277dd0u;
    // NOP
    // 0x277dd4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ddc: 0x0  nop
    ctx->pc = 0x277ddcu;
    // NOP
    // 0x277de0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277de8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277dec: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x277decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A40u, _value); } while (0);
    // 0x277df0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x277df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x277df4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277df8: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x277dfc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x277DFCu;
    {
        const bool branch_taken_0x277dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277dfc) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277E04u;
}
