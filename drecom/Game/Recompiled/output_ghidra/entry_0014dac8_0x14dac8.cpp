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

// Function: entry_0014dac8
// Address: 0x14dac8 - 0x14dbc4
void entry_0014dac8_0x14dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dac8_0x14dac8");
#endif

    switch (ctx->pc) {
        case 0x14db7cu: goto label_14db7c;
        default: break;
    }

    ctx->pc = 0x14dac8u;

label_14dac8:
    // 0x14dac8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dacc:
    // 0x14dacc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x14daccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_14dad0:
    // 0x14dad0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14dad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14dad4:
    // 0x14dad4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x14dad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
label_14dad8:
    // 0x14dad8: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dadc:
    // 0x14dadc: 0x948202d0  lhu         $v0, 0x2D0($a0)
    ctx->pc = 0x14dadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 720)));
label_14dae0:
    // 0x14dae0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14dae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14dae4:
    // 0x14dae4: 0xa48202d0  sh          $v0, 0x2D0($a0)
    ctx->pc = 0x14dae4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 720), (uint16_t)GPR_U32(ctx, 2));
label_14dae8:
    // 0x14dae8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14daec:
    // 0x14daec: 0x94620460  lhu         $v0, 0x460($v1)
    ctx->pc = 0x14daecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1120)));
label_14daf0:
    // 0x14daf0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14daf4:
    // 0x14daf4: 0xa4620460  sh          $v0, 0x460($v1)
    ctx->pc = 0x14daf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1120), (uint16_t)GPR_U32(ctx, 2));
label_14daf8:
    // 0x14daf8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14dafc:
    // 0x14dafc: 0x946205f0  lhu         $v0, 0x5F0($v1)
    ctx->pc = 0x14dafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1520)));
label_14db00:
    // 0x14db00: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14db00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14db04:
    // 0x14db04: 0xa46205f0  sh          $v0, 0x5F0($v1)
    ctx->pc = 0x14db04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1520), (uint16_t)GPR_U32(ctx, 2));
label_14db08:
    // 0x14db08: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14db08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db0c:
    // 0x14db0c: 0x94440780  lhu         $a0, 0x780($v0)
    ctx->pc = 0x14db0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1920)));
label_14db10:
    // 0x14db10: 0x308300fd  andi        $v1, $a0, 0xFD
    ctx->pc = 0x14db10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db14:
    // 0x14db14: 0xa4430780  sh          $v1, 0x780($v0)
    ctx->pc = 0x14db14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1920), (uint16_t)GPR_U32(ctx, 3));
label_14db18:
    // 0x14db18: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db1c:
    // 0x14db1c: 0x94641400  lhu         $a0, 0x1400($v1)
    ctx->pc = 0x14db1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5120)));
label_14db20:
    // 0x14db20: 0x308200fd  andi        $v0, $a0, 0xFD
    ctx->pc = 0x14db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db24:
    // 0x14db24: 0xa4621400  sh          $v0, 0x1400($v1)
    ctx->pc = 0x14db24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5120), (uint16_t)GPR_U32(ctx, 2));
label_14db28:
    // 0x14db28: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x14db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db2c:
    // 0x14db2c: 0x94851590  lhu         $a1, 0x1590($a0)
    ctx->pc = 0x14db2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 5520)));
label_14db30:
    // 0x14db30: 0x30a600fd  andi        $a2, $a1, 0xFD
    ctx->pc = 0x14db30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)253);
label_14db34:
    // 0x14db34: 0xa4861590  sh          $a2, 0x1590($a0)
    ctx->pc = 0x14db34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5520), (uint16_t)GPR_U32(ctx, 6));
label_14db38:
    // 0x14db38: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db3c:
    // 0x14db3c: 0x94440aa0  lhu         $a0, 0xAA0($v0)
    ctx->pc = 0x14db3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2720)));
label_14db40:
    // 0x14db40: 0x308500fd  andi        $a1, $a0, 0xFD
    ctx->pc = 0x14db40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_14db44:
    // 0x14db44: 0xa4450aa0  sh          $a1, 0xAA0($v0)
    ctx->pc = 0x14db44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2720), (uint16_t)GPR_U32(ctx, 5));
label_14db48:
    // 0x14db48: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_14db4c:
    // 0x14db4c: 0x94c20aa0  lhu         $v0, 0xAA0($a2)
    ctx->pc = 0x14db4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2720)));
label_14db50:
    // 0x14db50: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x14db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_14db54:
    // 0x14db54: 0xa4c20aa0  sh          $v0, 0xAA0($a2)
    ctx->pc = 0x14db54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2720), (uint16_t)GPR_U32(ctx, 2));
label_14db58:
    // 0x14db58: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_14db5c:
    // 0x14db5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14db5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_14db60:
    // 0x14db60: 0x26020170  addiu       $v0, $s0, 0x170
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_14db64:
    // 0x14db64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x14db64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_14db68:
    // 0x14db68: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x14db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14db6c:
    // 0x14db6c: 0xe600137c  swc1        $f0, 0x137C($s0)
    ctx->pc = 0x14db6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4988), bits); }
label_14db70:
    // 0x14db70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14db70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_14db74:
    // 0x14db74: 0xc057a2c  jal         func_15E8B0
label_14db78:
    if (ctx->pc == 0x14DB78u) {
        ctx->pc = 0x14DB7Cu;
        goto label_14db7c;
    }
    ctx->pc = 0x14DB74u;
    SET_GPR_U32(ctx, 31, 0x14DB7Cu);
    ctx->pc = 0x15E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B0u, 0x14DB74u, 0x14DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DB7Cu;
label_14db7c:
    // 0x14db7c: 0xe6001380  swc1        $f0, 0x1380($s0)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4992), bits); }
label_14db80:
    // 0x14db80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14db80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14db84:
    // 0x14db84: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14db88:
    // 0x14db88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_14db8c:
    // 0x14db8c: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
label_14db90:
    if (ctx->pc == 0x14DB90u) {
        ctx->pc = 0x14DB94u;
        goto label_14db94;
    }
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DE98u;
            return;
        }
    }
    ctx->pc = 0x14DB94u;
label_14db94:
    // 0x14db94: 0x920213a7  lbu         $v0, 0x13A7($s0)
    ctx->pc = 0x14db94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
label_14db98:
    // 0x14db98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14db98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14db9c:
    // 0x14db9c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x14db9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_14dba0:
    // 0x14dba0: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_14dba4:
    if (ctx->pc == 0x14DBA4u) {
        ctx->pc = 0x14DBA8u;
        goto label_14dba8;
    }
    ctx->pc = 0x14DBA0u;
    {
        const bool branch_taken_0x14dba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dba0) {
            ctx->pc = 0x14DBECu;
            return;
        }
    }
    ctx->pc = 0x14DBA8u;
label_14dba8:
    // 0x14dba8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14dbac:
    // 0x14dbac: 0x2463e900  addiu       $v1, $v1, -0x1700
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961408));
label_14dbb0:
    // 0x14dbb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14dbb4:
    // 0x14dbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14dbb8:
    // 0x14dbb8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x14dbb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14dbbc:
    // 0x14dbbc: 0x2400008  jr          $s2
label_14dbc0:
    if (ctx->pc == 0x14DBC0u) {
        ctx->pc = 0x14DBC4u;
        goto label_fallthrough_0x14dbbc;
    }
    ctx->pc = 0x14DBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DBBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14dbbc:
    ctx->pc = 0x14DBC4u;
}
