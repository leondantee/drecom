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

// Function: entry_00345328
// Address: 0x345328 - 0x3453d8
void entry_00345328_0x345328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345328_0x345328");
#endif

    switch (ctx->pc) {
        case 0x34538cu: goto label_34538c;
        default: break;
    }

    ctx->pc = 0x345328u;

    // 0x345328: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34532c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345330: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x345330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345334: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x345334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x345338: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x345338u;
    {
        const bool branch_taken_0x345338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345338) {
            ctx->pc = 0x3453D8u;
            return;
        }
    }
    ctx->pc = 0x345340u;
    // 0x345340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345344: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x345344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345348: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x345348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34534c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34534cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345350: 0x0  nop
    ctx->pc = 0x345350u;
    // NOP
    // 0x345354: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x345354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345358: 0x0  nop
    ctx->pc = 0x345358u;
    // NOP
    // 0x34535c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x34535Cu;
    {
        const bool branch_taken_0x34535c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34535c) {
            ctx->pc = 0x3453D8u;
            return;
        }
    }
    ctx->pc = 0x345364u;
    // 0x345364: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x345364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345368: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34536c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x345370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x345370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x345374: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x345374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345378: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34537c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345380: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x345380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x345384: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x345384u;
    SET_GPR_U32(ctx, 31, 0x34538Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x345384u, 0x34538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34538Cu;
label_34538c:
    // 0x34538c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34538Cu;
    {
        const bool branch_taken_0x34538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34538c) {
            ctx->pc = 0x3453D8u;
            return;
        }
    }
    ctx->pc = 0x345394u;
    // 0x345394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345398: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34539c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34539cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3453a0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3453A0u;
    {
        const bool branch_taken_0x3453a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3453a0) {
            ctx->pc = 0x3453D8u;
            return;
        }
    }
    ctx->pc = 0x3453A8u;
    // 0x3453a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3453a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3453ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3453b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453b4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x3453b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3453b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3453bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3453c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3453c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3453c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3453ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3453d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3453d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3453d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3453d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3453d8u;
}
