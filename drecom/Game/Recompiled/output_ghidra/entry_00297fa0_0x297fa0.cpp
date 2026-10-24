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

// Function: entry_00297fa0
// Address: 0x297fa0 - 0x298160
void entry_00297fa0_0x297fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297fa0_0x297fa0");
#endif

    switch (ctx->pc) {
        case 0x298038u: goto label_298038;
        default: break;
    }

    ctx->pc = 0x297fa0u;

    // 0x297fa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297fa8: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x297fac: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x297facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x297fb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x297fb4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x297FB4u;
    {
        const bool branch_taken_0x297fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297fb4) {
            ctx->pc = 0x298160u;
            return;
        }
    }
    ctx->pc = 0x297FBCu;
    // 0x297fbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297fc0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x297fc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297fcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x297fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297fd0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x297fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297fd4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x297fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297fdc: 0x0  nop
    ctx->pc = 0x297fdcu;
    // NOP
    // 0x297fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x297fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x297fe4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x297fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x297fe8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x297fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x297fec: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x297fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x297ff0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x297ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x297ff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297ffc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x297ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298000: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x298000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298008: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x298008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x29800c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x29800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x298010: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x298010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x298014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x298014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298018: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29801c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x29801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x298020: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x298020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x298024: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x298024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x298028: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x298028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29802c: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x29802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x298030: 0xc058f50  jal         func_163D40
    ctx->pc = 0x298030u;
    SET_GPR_U32(ctx, 31, 0x298038u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x298030u, 0x298038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298038u;
label_298038:
    // 0x298038: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29803c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x298040: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298044: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298048: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29804c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x29804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x298050: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x298050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x298054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298058: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x298058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x29805c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29805cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298060: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x298064: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x298064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x298068: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29806c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29806cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x298078: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x298078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x29807c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298080: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x298080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x298084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x298084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298088: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x298088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29808c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x298090: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x298090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298094: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298098: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x298098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29809c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x29809cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2980a0: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2980a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2980a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2980a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2980a8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2980a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2980ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2980b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2980b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2980b4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2980b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2980b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2980b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2980bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2980c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2980c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2980c4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x2980c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2980c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2980c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2980cc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x2980ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x2980d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2980d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2980d4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x2980d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2980d8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2980d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2980dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2980dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2980e0: 0x0  nop
    ctx->pc = 0x2980e0u;
    // NOP
    // 0x2980e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2980e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2980e8: 0x0  nop
    ctx->pc = 0x2980e8u;
    // NOP
    // 0x2980ec: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x2980ECu;
    {
        const bool branch_taken_0x2980ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2980ec) {
            ctx->pc = 0x298270u;
            return;
        }
    }
    ctx->pc = 0x2980F4u;
    // 0x2980f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2980f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2980f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2980f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2980fc: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x2980fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x298100: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x298100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298104: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298108: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29810c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x298110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298114: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x298118: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x298118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x29811c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298120: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x298120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x298124: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x298124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x298128: 0x244268b0  addiu       $v0, $v0, 0x68B0
    ctx->pc = 0x298128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
    // 0x29812c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298130: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x298134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298138: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x298138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x29813c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x298140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298144: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x298148: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x298148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29814c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x298150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298154: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x298154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x298158: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x298158u;
    {
        const bool branch_taken_0x298158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298158) {
            ctx->pc = 0x298270u;
            return;
        }
    }
    ctx->pc = 0x298160u;
}
