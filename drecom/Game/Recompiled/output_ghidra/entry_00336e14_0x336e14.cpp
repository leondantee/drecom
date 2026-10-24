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

// Function: entry_00336e14
// Address: 0x336e14 - 0x336ecc
void entry_00336e14_0x336e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336e14_0x336e14");
#endif

    switch (ctx->pc) {
        case 0x336eb0u: goto label_336eb0;
        default: break;
    }

    ctx->pc = 0x336e14u;

    // 0x336e14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336e18: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e1c: 0xa0224bf8  sb          $v0, 0x4BF8($at)
    ctx->pc = 0x336e1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894BF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894BF8u, _value); } while (0);
    // 0x336e20: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x336e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x336e24: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x336e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x336e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e2c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e30: 0xe4204bf4  swc1        $f0, 0x4BF4($at)
    ctx->pc = 0x336e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BF4u, _value); } while (0); }
    // 0x336e34: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x336e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x336e38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e3c: 0xa0224bf9  sb          $v0, 0x4BF9($at)
    ctx->pc = 0x336e3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894BF9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894BF9u, _value); } while (0);
    // 0x336e40: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x336e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x336e44: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x336e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x336e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e4c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e50: 0xe4204bf0  swc1        $f0, 0x4BF0($at)
    ctx->pc = 0x336e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BF0u, _value); } while (0); }
    // 0x336e54: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x336e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x336e58: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x336e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x336e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x336e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e60: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e64: 0xe4204bfc  swc1        $f0, 0x4BFC($at)
    ctx->pc = 0x336e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894BFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894BFCu, _value); } while (0); }
    // 0x336e68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x336e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x336e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x336e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e74: 0xe4204c00  swc1        $f0, 0x4C00($at)
    ctx->pc = 0x336e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x894C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C00u, _value); } while (0); }
    // 0x336e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e80: 0xa0224c05  sb          $v0, 0x4C05($at)
    ctx->pc = 0x336e80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x894C05u, _value); } while (0);
    // 0x336e84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x336e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x336e88: 0x24626158  addiu       $v0, $v1, 0x6158
    ctx->pc = 0x336e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x336e8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336e90: 0xac224c10  sw          $v0, 0x4C10($at)
    ctx->pc = 0x336e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894C10u, _value); } while (0);
    // 0x336e94: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x336e98: 0x24444c18  addiu       $a0, $v0, 0x4C18
    ctx->pc = 0x336e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x336e9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x336e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x336ea0: 0x2465e7d0  addiu       $a1, $v1, -0x1830
    ctx->pc = 0x336ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x336ea4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x336ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x336ea8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x336EA8u;
    SET_GPR_U32(ctx, 31, 0x336EB0u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x336EB0u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x336EB0u) { return; }
    ctx->pc = 0x336EB0u;
label_336eb0:
    // 0x336eb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x336eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x336eb4: 0x12c20012  beq         $s6, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x336EB4u;
    {
        const bool branch_taken_0x336eb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x336eb4) {
            ctx->pc = 0x336F00u;
            return;
        }
    }
    ctx->pc = 0x336EBCu;
    // 0x336ebc: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x336EBCu;
    {
        const bool branch_taken_0x336ebc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ebc) {
            ctx->pc = 0x336ECCu;
            return;
        }
    }
    ctx->pc = 0x336EC4u;
    // 0x336ec4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x336EC4u;
    {
        const bool branch_taken_0x336ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ec4) {
            ctx->pc = 0x336F70u;
            return;
        }
    }
    ctx->pc = 0x336ECCu;
}
