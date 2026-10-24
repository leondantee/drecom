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

// Function: Gp_Rengt4N_mk_free_tag
// Address: 0x1d3510 - 0x1d36dc
void Gp_Rengt4N_mk_free_tag_0x1d3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Rengt4N_mk_free_tag_0x1d3510");
#endif

    ctx->pc = 0x1d3510u;

    // 0x1d3510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d3514: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d3514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d3518: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d3518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d351c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d3520: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d352c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1d352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1d3530: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x1d3530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x1d3534: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d3538: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1d3538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d353c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3544: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1d3544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1d3548: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x1d3548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d354c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d354cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1d3550: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1d3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1d3554: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3554u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1d3558: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d355c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d355cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1d3560: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d3564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d3564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d3568: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d3568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d356c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1d356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3570: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3578: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d3578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d357c: 0x24430090  addiu       $v1, $v0, 0x90
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1d3580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3584: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3588: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d358c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3590: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x1d3590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d3594: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1d3594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3598: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d359c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d35a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d35a4: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1d35a8: 0x8e350a68  lw          $s5, 0xA68($s1)
    ctx->pc = 0x1d35a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x1d35ac: 0x8e230a68  lw          $v1, 0xA68($s1)
    ctx->pc = 0x1d35acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x1d35b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d35b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d35b8: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x1d35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d35bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d35c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d35c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d35c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d35c8: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x1d35c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d35cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d35d0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1d35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1d35d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d35d8: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d35dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d35e0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d35e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d35e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d35e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d35ec: 0x8e230a68  lw          $v1, 0xA68($s1)
    ctx->pc = 0x1d35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x1d35f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d35f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d35f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d35fc: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x1d35fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d3600: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3604: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3608: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d360c: 0x26230a68  addiu       $v1, $s1, 0xA68
    ctx->pc = 0x1d360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d3610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d3614: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1d3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1d3618: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d361c: 0x26240a68  addiu       $a0, $s1, 0xA68
    ctx->pc = 0x1d361cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2664));
    // 0x1d3620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d3620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3624: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d3628: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d3628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d362c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d362cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3630: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3634: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d3634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3638: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d363c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d3640: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d3640u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d3644: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1d3644u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3648: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d364c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d364cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3650: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3654: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1d3654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3658: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1d3658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d365c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d3660: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1d3664: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d3664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d3668: 0x2642fff0  addiu       $v0, $s2, -0x10
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x1d366c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d3670: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3674: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d3678: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d3678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d367c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1d367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1d3680: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d3684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d3684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d3688: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1d3688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d368c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3690: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3694: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3698: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1d3698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d369c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1d369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d36a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d36a4: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x1d36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1d36a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d36ac: 0x2642fff0  addiu       $v0, $s2, -0x10
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x1d36b0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d36b4: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1d36b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d36b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d36b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d36bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d36bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d36c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d36c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d36c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d36c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d36c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d36c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d36cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d36ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d36d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1d36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d36d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D36DCu;
}
