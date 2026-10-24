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

// Function: entry_00239588
// Address: 0x239588 - 0x239694
void entry_00239588_0x239588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239588_0x239588");
#endif

    switch (ctx->pc) {
        case 0x239644u: goto label_239644;
        default: break;
    }

    ctx->pc = 0x239588u;

    // 0x239588: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23958c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239590: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x239590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239598: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x239598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x23959c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x23959cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2395a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2395a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2395a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2395a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2395ac: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2395acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2395b0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2395b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2395b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2395c0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2395c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2395c4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2395c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2395c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2395c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2395cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2395d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2395d8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2395d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2395dc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2395dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2395e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2395e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2395e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2395e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2395e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2395f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2395f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2395f4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2395f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2395f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2395fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2395fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239600: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239604: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239608: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23960c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x239610: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239618: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23961c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239620: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x239624: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239628: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23962c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239630: 0x3406f008  ori         $a2, $zero, 0xF008
    ctx->pc = 0x239630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61448);
    // 0x239634: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239638: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23963c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23963Cu;
    SET_GPR_U32(ctx, 31, 0x239644u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23963Cu, 0x239644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239648: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x239648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x23964c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23964Cu;
    {
        const bool branch_taken_0x23964c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23964c) {
            ctx->pc = 0x239694u;
            return;
        }
    }
    ctx->pc = 0x239654u;
    // 0x239654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239658: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23965c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x23965cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x239660: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x239660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x239664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23966c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239670: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23967c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23967cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239680: 0x3406f00a  ori         $a2, $zero, 0xF00A
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61450);
    // 0x239684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239688: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23968c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23968Cu;
    SET_GPR_U32(ctx, 31, 0x239694u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23968Cu, 0x239694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239694u;
}
