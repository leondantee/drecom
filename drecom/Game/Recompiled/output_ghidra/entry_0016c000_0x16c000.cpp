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

// Function: entry_0016c000
// Address: 0x16c000 - 0x16c178
void entry_0016c000_0x16c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c000_0x16c000");
#endif

    switch (ctx->pc) {
        case 0x16c140u: goto label_16c140;
        default: break;
    }

    ctx->pc = 0x16c000u;

    // 0x16c000: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c004: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c008: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c00c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c010: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16c010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16c014: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c018: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c01c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c020: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c024: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c028: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c028u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c02c: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x16C02Cu;
    {
        const bool branch_taken_0x16c02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c02c) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C034u;
    // 0x16c034: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c038: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c03c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c040: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c044: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x16c044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16c048: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c04c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c050: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c054: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c058: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c05c: 0x14200046  bnez        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x16C05Cu;
    {
        const bool branch_taken_0x16c05c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c05c) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C064u;
    // 0x16c064: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c068: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c06c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c070: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c074: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16c074u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16c078: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c07c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c080: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c088: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c08c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c090: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x16C090u;
    {
        const bool branch_taken_0x16c090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c090) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C098u;
    // 0x16c098: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x16c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c09c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c0a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c0a4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c0a8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x16c0a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16c0ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c0b0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c0b4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x16c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c0b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c0bc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c0c0: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x16C0C0u;
    {
        const bool branch_taken_0x16c0c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c0c0) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C0C8u;
    // 0x16c0c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16c0cc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c0d0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c0d4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c0d8: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16c0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16c0dc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c0e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c0e4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c0e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c0ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16c0f0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16c0f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c0f4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16C0F4u;
    {
        const bool branch_taken_0x16c0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c0f4) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C0FCu;
    // 0x16c0fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16c100: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c104: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c108: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16c108u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c10c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x16c10cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16c110: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16c110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16c114: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x16c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c118: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c11c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c120: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16c120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16c124: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16C124u;
    {
        const bool branch_taken_0x16c124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c124) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C12Cu;
    // 0x16c12c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x16c12cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16c130: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16c130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16c134: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x16c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16c138: 0xc05a18c  jal         func_168630
    ctx->pc = 0x16C138u;
    SET_GPR_U32(ctx, 31, 0x16C140u);
    ctx->pc = 0x168630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168630u, 0x16C138u, 0x16C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C140u;
label_16c140:
    // 0x16c140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c144: 0x1643000c  bne         $s2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16C144u;
    {
        const bool branch_taken_0x16c144 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c144) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C14Cu;
    // 0x16c14c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x16c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c150: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c154: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16c154u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c158: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16c158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c15c: 0x0  nop
    ctx->pc = 0x16c15cu;
    // NOP
    // 0x16c160: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x16C160u;
    {
        const bool branch_taken_0x16c160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c160) {
            ctx->pc = 0x16C178u;
            return;
        }
    }
    ctx->pc = 0x16C168u;
    // 0x16c168: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x16c16c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16c16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16c170: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16c170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16c174: 0x0  nop
    ctx->pc = 0x16c174u;
    // NOP
    ctx->pc = 0x16c178u;
}
