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

// Function: entry_00335e64
// Address: 0x335e64 - 0x335f74
void entry_00335e64_0x335e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335e64_0x335e64");
#endif

    switch (ctx->pc) {
        case 0x335f20u: goto label_335f20;
        default: break;
    }

    ctx->pc = 0x335e64u;

    // 0x335e64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e68: 0xac203430  sw          $zero, 0x3430($at)
    ctx->pc = 0x335e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893430u, _value); } while (0);
    // 0x335e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335e70: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e74: 0xac2249a0  sw          $v0, 0x49A0($at)
    ctx->pc = 0x335e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A0u, _value); } while (0);
    // 0x335e78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335e7c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e80: 0xac2249a8  sw          $v0, 0x49A8($at)
    ctx->pc = 0x335e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949A8u, _value); } while (0);
    // 0x335e84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335e88: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335e8c: 0xa02249b8  sb          $v0, 0x49B8($at)
    ctx->pc = 0x335e8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949B8u, _value); } while (0);
    // 0x335e90: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x335e94: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x335e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x335e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335e9c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ea0: 0xe42049b4  swc1        $f0, 0x49B4($at)
    ctx->pc = 0x335ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949B4u, _value); } while (0); }
    // 0x335ea4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x335ea8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335eac: 0xa02249b9  sb          $v0, 0x49B9($at)
    ctx->pc = 0x335eacu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949B9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949B9u, _value); } while (0);
    // 0x335eb0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x335eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x335eb4: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x335eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x335eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ebc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ec0: 0xe42049b0  swc1        $f0, 0x49B0($at)
    ctx->pc = 0x335ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949B0u, _value); } while (0); }
    // 0x335ec4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x335ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x335ec8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x335ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ed0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ed4: 0xe42049bc  swc1        $f0, 0x49BC($at)
    ctx->pc = 0x335ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949BCu, _value); } while (0); }
    // 0x335ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ee0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ee4: 0xe42049c0  swc1        $f0, 0x49C0($at)
    ctx->pc = 0x335ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8949C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949C0u, _value); } while (0); }
    // 0x335ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335eec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ef0: 0xa02249c5  sb          $v0, 0x49C5($at)
    ctx->pc = 0x335ef0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949C5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8949C5u, _value); } while (0);
    // 0x335ef4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x335ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x335ef8: 0x24826158  addiu       $v0, $a0, 0x6158
    ctx->pc = 0x335ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24920));
    // 0x335efc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f00: 0xac2249d0  sw          $v0, 0x49D0($at)
    ctx->pc = 0x335f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8949D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8949D0u, _value); } while (0);
    // 0x335f04: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x335f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x335f08: 0x248449d8  addiu       $a0, $a0, 0x49D8
    ctx->pc = 0x335f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18904));
    // 0x335f0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x335f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x335f10: 0x2445e7d0  addiu       $a1, $v0, -0x1830
    ctx->pc = 0x335f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x335f14: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335f18: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335F18u;
    SET_GPR_U32(ctx, 31, 0x335F20u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335F20u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335F20u) { return; }
    ctx->pc = 0x335F20u;
label_335f20:
    // 0x335f20: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x335f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x335f24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f28: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f2c: 0xa4224a00  sh          $v0, 0x4A00($at)
    ctx->pc = 0x335f2cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A00u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A00u, _value); } while (0);
    // 0x335f30: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x335f34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f3c: 0xa4224a02  sh          $v0, 0x4A02($at)
    ctx->pc = 0x335f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A02u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A02u, _value); } while (0);
    // 0x335f40: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x335f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x335f44: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x335f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x335f48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f4c: 0xa4224a04  sh          $v0, 0x4A04($at)
    ctx->pc = 0x335f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A04u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A04u, _value); } while (0);
    // 0x335f50: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x335f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x335f54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335f58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335f5c: 0xa4224a06  sh          $v0, 0x4A06($at)
    ctx->pc = 0x335f5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894A06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894A06u, _value); } while (0);
    // 0x335f60: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335f64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x335f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335f68: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x335f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x335f6c: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x335F6Cu;
    {
        const bool branch_taken_0x335f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f6c) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x335F74u;
}
