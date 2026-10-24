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

// Function: Sce_scheduler_main
// Address: 0x212210 - 0x212328
void Sce_scheduler_main_0x212210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_scheduler_main_0x212210");
#endif

    switch (ctx->pc) {
        case 0x21222cu: goto label_21222c;
        case 0x212274u: goto label_212274;
        case 0x212288u: goto label_212288;
        case 0x2122b8u: goto label_2122b8;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122fcu: goto label_2122fc;
        default: break;
    }

    ctx->pc = 0x212210u;

    // 0x212210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212214: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x212214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x212218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21221c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212220: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x212224: 0x247096e0  addiu       $s0, $v1, -0x6920
    ctx->pc = 0x212224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940384));
    // 0x212228: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x212228u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21222c:
    // 0x21222c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x21222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x212230: 0xac3096d0  sw          $s0, -0x6930($at)
    ctx->pc = 0x212230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6196D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6196D0u, _value); } while (0);
    // 0x212234: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x212234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212238: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x212238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x21223c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212240: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x212240u;
    {
        const bool branch_taken_0x212240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x212240) {
            ctx->pc = 0x2122B8u;
            goto label_2122b8;
        }
    }
    ctx->pc = 0x212248u;
    // 0x212248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21224c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21224Cu;
    {
        const bool branch_taken_0x21224c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21224c) {
            ctx->pc = 0x212290u;
            goto label_212290;
        }
    }
    ctx->pc = 0x212254u;
    // 0x212254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x212254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x212258: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x212258) {
            ctx->pc = 0x212268u;
            goto label_212268;
        }
    }
    ctx->pc = 0x212260u;
    // 0x212260: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x212260u;
    {
        const bool branch_taken_0x212260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212260) {
            ctx->pc = 0x2122D0u;
            goto label_2122d0;
        }
    }
    ctx->pc = 0x212268u;
label_212268:
    // 0x212268: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21226c: 0xc084a08  jal         func_212820
    ctx->pc = 0x21226Cu;
    SET_GPR_U32(ctx, 31, 0x212274u);
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x212274u;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212274u) { return; }
    ctx->pc = 0x212274u;
label_212274:
    // 0x212274: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x212274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x212278: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x212278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21227c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21227cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212280: 0xc084a10  jal         func_212840
    ctx->pc = 0x212280u;
    SET_GPR_U32(ctx, 31, 0x212288u);
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x212288u;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212288u) { return; }
    ctx->pc = 0x212288u;
label_212288:
    // 0x212288: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x212288u;
    {
        const bool branch_taken_0x212288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212288) {
            ctx->pc = 0x2122B8u;
            goto label_2122b8;
        }
    }
    ctx->pc = 0x212290u;
label_212290:
    // 0x212290: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x212290u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x212294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x212294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x212298: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x212298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x21229c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x21229cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2122a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122a4: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2122A4u;
    {
        const bool branch_taken_0x2122a4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2122a4) {
            ctx->pc = 0x2122D0u;
            goto label_2122d0;
        }
    }
    ctx->pc = 0x2122ACu;
    // 0x2122ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2122b0: 0xc084a54  jal         func_212950
    ctx->pc = 0x2122B0u;
    SET_GPR_U32(ctx, 31, 0x2122B8u);
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x2122B8u;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2122B8u) { return; }
    ctx->pc = 0x2122B8u;
label_2122b8:
    // 0x2122b8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2122b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2122bc: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2122bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2122c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2122c4: 0x8c24fb98  lw          $a0, -0x468($at)
    ctx->pc = 0x2122c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFB98u));
    // 0x2122c8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x2122C8u;
    SET_GPR_U32(ctx, 31, 0x2122D0u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x2122D0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2122D0u) { return; }
    ctx->pc = 0x2122D0u;
label_2122d0:
    // 0x2122d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2122d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2122d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2122d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2122d8: 0xac3096d0  sw          $s0, -0x6930($at)
    ctx->pc = 0x2122d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6196D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6196D0u, _value); } while (0);
    // 0x2122dc: 0x9603ffc8  lhu         $v1, -0x38($s0)
    ctx->pc = 0x2122dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x2122e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2122e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2122e4: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2122e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2122e8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2122E8u;
    {
        const bool branch_taken_0x2122e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2122e8) {
            ctx->pc = 0x212300u;
            goto label_212300;
        }
    }
    ctx->pc = 0x2122F0u;
    // 0x2122f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2122f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2122f4: 0xc084900  jal         func_212400
    ctx->pc = 0x2122F4u;
    SET_GPR_U32(ctx, 31, 0x2122FCu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x2122F4u, 0x2122FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122FCu;
label_2122fc:
    // 0x2122fc: 0x0  nop
    ctx->pc = 0x2122fcu;
    // NOP
label_212300:
    // 0x212300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x212304: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x212304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x212308: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x212308u;
    {
        const bool branch_taken_0x212308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212308) {
            ctx->pc = 0x21222Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21222c;
        }
    }
    ctx->pc = 0x212310u;
    // 0x212310: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x212310u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21231c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212320: 0x3e00008  jr          $ra
    ctx->pc = 0x212320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212328u;
}
