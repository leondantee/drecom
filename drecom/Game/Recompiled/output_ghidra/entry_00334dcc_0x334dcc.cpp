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

// Function: entry_00334dcc
// Address: 0x334dcc - 0x334f10
void entry_00334dcc_0x334dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334dcc_0x334dcc");
#endif

    switch (ctx->pc) {
        case 0x334e7cu: goto label_334e7c;
        case 0x334ec4u: goto label_334ec4;
        case 0x334ed8u: goto label_334ed8;
        default: break;
    }

    ctx->pc = 0x334dccu;

    // 0x334dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334dd0: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x334dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x334dd4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334dd8: 0xac2032d0  sw          $zero, 0x32D0($at)
    ctx->pc = 0x334dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D0u, _value); } while (0);
    // 0x334ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x334ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334de0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334de4: 0xe42032c8  swc1        $f0, 0x32C8($at)
    ctx->pc = 0x334de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8932C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932C8u, _value); } while (0); }
    // 0x334de8: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x334de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x334dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x334decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x334df0: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x334df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x334df4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334df8: 0xac2032d8  sw          $zero, 0x32D8($at)
    ctx->pc = 0x334df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8932D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8932D8u, _value); } while (0);
    // 0x334dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x334dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334e00: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x334e00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x334e04: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x334e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x334e08: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x334e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e10: 0x0  nop
    ctx->pc = 0x334e10u;
    // NOP
    // 0x334e14: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x334e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x334e18: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x334e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x334e1c: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x334e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x334e20: 0x3c02bd80  lui         $v0, 0xBD80
    ctx->pc = 0x334e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48512 << 16));
    // 0x334e24: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x334e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x334e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e2c: 0x0  nop
    ctx->pc = 0x334e2cu;
    // NOP
    // 0x334e30: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x334e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x334e34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x334e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x334e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e3c: 0x0  nop
    ctx->pc = 0x334e3cu;
    // NOP
    // 0x334e40: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x334e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x334e44: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x334e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x334e48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x334e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x334e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x334e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x334e50: 0x0  nop
    ctx->pc = 0x334e50u;
    // NOP
    // 0x334e54: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x334e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x334e58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x334e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x334e5c: 0x24426158  addiu       $v0, $v0, 0x6158
    ctx->pc = 0x334e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24920));
    // 0x334e60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x334e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x334e64: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x334e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x334e68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x334e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x334e6c: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x334e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x334e70: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x334e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x334e74: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x334E74u;
    SET_GPR_U32(ctx, 31, 0x334E7Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x334E7Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x334E7Cu) { return; }
    ctx->pc = 0x334E7Cu;
label_334e7c:
    // 0x334e7c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x334e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x334e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e84: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x334e84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x334e88: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x334e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x334e8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e90: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x334e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x334e94: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x334e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x334e98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334e9c: 0xa6220034  sh          $v0, 0x34($s1)
    ctx->pc = 0x334e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x334ea0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x334ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x334ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x334ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334ea8: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x334ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x334eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334eb0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x334eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x334eb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334eb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334eb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ebc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x334EBCu;
    SET_GPR_U32(ctx, 31, 0x334EC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x334EBCu, 0x334EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334EC4u;
label_334ec4:
    // 0x334ec4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x334ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x334ec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ecc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334eccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334ed0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x334ED0u;
    SET_GPR_U32(ctx, 31, 0x334ED8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x334ED0u, 0x334ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334ED8u;
label_334ed8:
    // 0x334ed8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x334ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x334edc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x334edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x334ee0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x334EE0u;
    {
        const bool branch_taken_0x334ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ee0) {
            ctx->pc = 0x334F10u;
            return;
        }
    }
    ctx->pc = 0x334EE8u;
    // 0x334ee8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x334ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x334eec: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x334eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x334ef0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334ef4: 0xac223338  sw          $v0, 0x3338($at)
    ctx->pc = 0x334ef4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893338u, _value); } while (0);
    // 0x334ef8: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x334ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x334efc: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x334efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x334f00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x334f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x334f04: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x334f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x334f08: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x334F08u;
    {
        const bool branch_taken_0x334f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f08) {
            ctx->pc = 0x335020u;
            return;
        }
    }
    ctx->pc = 0x334F10u;
}
