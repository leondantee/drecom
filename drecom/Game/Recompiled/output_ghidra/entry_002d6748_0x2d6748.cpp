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

// Function: entry_002d6748
// Address: 0x2d6748 - 0x2d692c
void entry_002d6748_0x2d6748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6748_0x2d6748");
#endif

    switch (ctx->pc) {
        case 0x2d6858u: goto label_2d6858;
        default: break;
    }

    ctx->pc = 0x2d6748u;

    // 0x2d6748: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d674c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6750: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x2d6754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6758: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d675c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6760: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6768: 0x0  nop
    ctx->pc = 0x2d6768u;
    // NOP
    // 0x2d676c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6770: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6774: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6778: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d677c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6780: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6784: 0x24500c80  addiu       $s0, $v0, 0xC80
    ctx->pc = 0x2d6784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2d6788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d678c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6790: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6794: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d679c: 0x0  nop
    ctx->pc = 0x2d679cu;
    // NOP
    // 0x2d67a0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d67a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d67a4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d67a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d67a8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d67ac: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d67acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d67b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d67b8: 0x24500fa0  addiu       $s0, $v0, 0xFA0
    ctx->pc = 0x2d67b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2d67bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67c0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d67c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d67c8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d67c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d67cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d67ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d67d0: 0x0  nop
    ctx->pc = 0x2d67d0u;
    // NOP
    // 0x2d67d4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d67d8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d67d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d67dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d67e0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d67e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d67e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67e8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d67ec: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x2d67ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2d67f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67f4: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d67f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d67fc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6804: 0x0  nop
    ctx->pc = 0x2d6804u;
    // NOP
    // 0x2d6808: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d6808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d680c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d680cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6810: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6814: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d681c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6820: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2d6820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2d6824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6828: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d682c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6830: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6838: 0x0  nop
    ctx->pc = 0x2d6838u;
    // NOP
    // 0x2d683c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6840: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6844: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6848: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d684c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6850: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D6850u;
    SET_GPR_U32(ctx, 31, 0x2D6858u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D6850u, 0x2D6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6858u;
label_2d6858:
    // 0x2d6858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d685c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d685cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6860: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D6860u;
    {
        const bool branch_taken_0x2d6860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6860) {
            ctx->pc = 0x2D692Cu;
            return;
        }
    }
    ctx->pc = 0x2D6868u;
    // 0x2d6868: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d686c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6870: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6874: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6878: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d687c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d687cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6880: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d688c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d688cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6890: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6898: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d689c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d68a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d68a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d68ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d68b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68bc: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x2d68bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x2d68c0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68c4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68c8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68d0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68d4: 0x24700c80  addiu       $s0, $v1, 0xC80
    ctx->pc = 0x2d68d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2d68d8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68dc: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68e0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68e8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68ec: 0x24700fa0  addiu       $s0, $v1, 0xFA0
    ctx->pc = 0x2d68ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2d68f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68f4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68f8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6900: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d6904: 0x247012c0  addiu       $s0, $v1, 0x12C0
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2d6908: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d6908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d690c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d6910: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d6910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d6914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6918: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d6918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d691c: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2d691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2d6920: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d6920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6924: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d6924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d6928: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d6928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d692cu;
}
